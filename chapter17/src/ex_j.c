#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
} Node;

typedef struct queue {
	Node* rear;
	Node* front;
} Queue;

void display(Node* temp);
void enqueue(Queue* q, int data);
void dequeue(Queue* q);

int main() {

	Queue* q;
	q->rear = NULL;
	q->front = NULL;

	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 30);

	printf("\nDisplaying nodes: \n");
	Node* temp = q->front;
	display(temp);

	dequeue(q);

	printf("\nDisplaying nodes: \n");
	temp = q->front;
	display(temp);

	return 0;
}

void enqueue(Queue * q, int data) {
	Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = NULL;
	if (q->rear == NULL) {
		q->front = new_node;
		q->rear = new_node;
		printf("Rear: %d, Front: %d", q->rear->data, q->front->data);
	} else {
		q->rear->next = new_node;
		q->rear = new_node;
		// printf("Rear: %d, Front: %d", rear->data, front->data);

	}
}

void dequeue(Queue *q) {
	Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	if (q->front == NULL) {
		printf("\nQueue Empty! Deletion not possible\n");
	} else {
		q->front = q->front->next;
	}
}

void display(Node* temp) {
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}