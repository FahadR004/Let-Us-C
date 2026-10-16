#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
} Node;

void display(Node* temp);
Node* insert_node(Node* node1, Node* head, int data);

int main() {
	int i;

	// Pointer variable itself is set to NULL
	Node* head = NULL;
	Node* node1 = NULL;
	Node* node2 = NULL;
	Node* node3 = NULL;

	// Holds memory address of a location present on the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	node1 = (struct Node*)malloc(sizeof(struct Node));
	node2 = (struct Node*)malloc(sizeof(struct Node));
	node3 = (struct Node*)malloc(sizeof(struct Node));

	head->next = node1;
	head->next->data = 10;

	node1->next = node2;
	node2->data = 20;

	node2->next = node3;
	node3->data = 30;

	node3->next = NULL; 

	// Point temp to where head is pointing
	Node* temp = head->next;
	display(temp);

	temp = head->next;
	insert_node(temp, head, 5);
	
	temp = head->next;
	display(temp);

	temp = head->next;
	insert_node(temp, head, 15);
	
	temp = head->next;
	display(temp);



	return 0;
}

Node* insert_node(Node* node1, Node* head, int data) {
	Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	if (node1->data > data) {
		new_node->data= data;
		new_node->next = node1;
		head->next = new_node;
	} else {
		Node* prev = head;
		Node* temp = head->next;
		while (temp->next != NULL && temp->data < data){
			prev = temp;
			temp = temp->next;
		}
		new_node->data = data;
		new_node->next = prev->next;
		prev->next = new_node;
	}
	
}

void display(Node* temp) {
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}