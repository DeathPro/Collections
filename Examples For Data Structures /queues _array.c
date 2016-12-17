#include <stdio.h>
#include <stdlib.h>

struct q {
	int front;
	int rear;
	int cnt;
	int data[10];
};
typedef struct q queue;

void initialize(queue *q) {
	q->front = 0;
	q->rear = -1;
	q->cnt = 0;
}
int isfull(queue *q) {
	return (q->cnt != 10);
}
void enqueue(queue *q, int x) {
	if (!isfull(q)) {
		q->rear++;
		q->cnt++;
		if (q->rear == 10)
			q->rear = 0;
		q->data[q->rear] = x;
	}
}
int isempty(queue *q) {
	return (q->cnt == 0);
}
int dequeue(queue *q) {
	if (!isempty(q)) {
		int x = q->data[q->front];
		q->front++;
		if (q->front == 10)
			q->front = 0;
		return x;
	}
	return -1;
}
