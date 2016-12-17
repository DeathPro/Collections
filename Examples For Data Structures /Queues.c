#include <stdio.h>
#include <stdlib.h>

//Queues -> FIFO -> First In First Out
//Stack -> LIFO -> Last In First Out

struct n {
	int data;
	struct n *next;

};

typedef struct n node;

struct q {
	int cnt;
	node *front;
	node *rear;
};

typedef struct q queue;

void initialize(queue *q) {
	q->cnt = 0;
	q->front = NULL; //q->front=q->rear=NULL;
	q->rear = NULL;	 //
}

int isempty(queue *q) {
	return (q->cnt == 0);
}

void enque(queue *q, int x) {
	node *temp;
	temp = (node *) malloc(sizeof(node));
	temp->data = x;
	temp->next = NULL;

	if (isempty(q)) {
		q->front = temp;	 //q->front=q->rear=temp;
		q->rear = temp;	 //
	} else {
		q->rear->next = temp;
		q->rear = temp;
	}
	q->cnt++;
}

int dequeue(queue *q) {
	if (!isempty(q)) {
		node *temp;
		temp = q->front;
		int x = temp->data;
		q->front = q->front->next;
		free(temp);
		q->cnt--;
		return x;
	}
	return 0;
}

int main() {
	queue *q;
	enque(q, 5);
	dequeue(q);

	return 0;
}

