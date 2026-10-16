#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node* add_start(struct Node* head, int data);
void add_middle(struct Node* head, int data);
void add_end();
void display(struct Node* temp);

int main() {
	int i;

	// Pointer variable itself is set to NULL
	struct Node* head = NULL;
	struct Node* node1 = NULL;
	struct Node* node2 = NULL;
	struct Node* node3 = NULL;

	// Holds memory address of a location present on the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	node1 = (struct Node*)malloc(sizeof(struct Node));
	node2 = (struct Node*)malloc(sizeof(struct Node));
	node3 = (struct Node*)malloc(sizeof(struct Node));

	head->next = node1;
	head->next->data = 10;
	// node1->data = 10;

	// node1->next = NULL;
	// printf("\nAdd middle: \n");
	// add_middle(head, 15);
	// Node* temp = head->next;
	// display(temp);

	node1->next = node2;
	node2->data = 20;

	node2->next = node3;
	node3->data = 30;

	node3->next = NULL; 

	// Point temp to where head is pointing
	Node* temp = head->next;
	display(temp);

	printf("\nAdd start: \n");
	temp = head;
	head = add_start(temp, 5);
	temp = head->next;
	display(temp);

	printf("\nAdd end: \n");
	temp = head;
	add_end(temp, 35);
	temp = head->next;
	display(temp);

	printf("\nAdd middle: \n");
	add_middle(head, 15);
	temp = head->next;
	display(temp);

	// Curly brace initialization can only occur with declaration 
	// head = {0, &node1};
	// node1 = {10, &node2};
	// node2 = {20, &node3};
	// node3 = {30, NULL};

	return 0;
}

void display(Node* temp) {
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

Node* add_start(Node* head, int data) {
	Node* new_head = NULL;
	new_head = (struct Node*) malloc(sizeof(struct Node));
	new_head->next = head->next;
	new_head->data = data;
	head->next = new_head;
	return head;
}

void add_end(Node* head, int data) {
	Node* new_node = NULL;
	new_node = (struct Node*) malloc(sizeof(struct Node));
	while (head->next != NULL) {
		head = head->next;
	}
	head->next = new_node;
	new_node->data = data;
	new_node->next = NULL;
}

void add_middle(Node* head, int data) {
	int i = 1, count = 1;
	Node* temp = head->next;
	while (temp->next != NULL) {
		count += 1;
		temp = temp->next;	
	}
	if (count == 1) {
		add_end(head, data);
	} else {
		Node* new_node = NULL;
		new_node = (struct Node*) malloc(sizeof(struct Node));
		Node* prev = head;
		Node* curr = head->next;
		while (i <= count/2) {
			// printf("Prev: %d, Next: %d, Count: %d\n", prev->data, curr->data, count);
			prev = prev->next;
			curr = curr->next;
			// printf("Prev: %d, Next: %d, Count: %d\n", prev->data, curr->data, count);
			i++;
		}
		new_node->next = curr;
		prev->next = new_node;
		new_node->data = data;
	}
}
