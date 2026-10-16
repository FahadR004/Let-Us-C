#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
} Node;

void display(Node* temp);
Node* push(Node* top, int data);
Node* pop(Node* top);
void peek(Node* top);

int main() {

	Node* stack = NULL;
	peek(stack);

	stack = push(stack, 10);
	stack = push(stack, 20);
	stack = push(stack, 30);


	printf("\nDisplaying nodes: \n");
	Node* temp = stack;
	display(temp);

	stack = pop(stack);

	printf("\nDisplaying nodes: \n");
	temp = stack;
	display(temp);

	peek(stack);

	return 0;
}

Node* push(Node* top, int data) {
	Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = top;
	top = new_node;
	return top;
}

Node* pop(Node* top) {
	top = top->next;
	return top;
}

void peek(Node* top) {
	if (top != NULL)
		printf("\nTop of the stack: %d\n", top->data);
	else
		printf("\nStack empty. No data!\n");
}


void display(Node* temp) {
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}