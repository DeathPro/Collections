//#include <stdio.h>
//#include <stdlib.h>
////1.customer (0 - 3)musterinin gelme sıklıgı dakika (random)
////2.operators -> EFT -> 1 - 5(random),credit -> 15 - 40,receipt -> 0,5 - 2,para yatirma -> 0,1 - 1 dakika (random)
////3.clock ->one queue
//
//struct stack {
//	int cnt;
//	struct stack *front;
//	struct stack *rear;
//};
//
//typedef struct stack stack;
//
//struct node {
//	int data;
//	struct node *next;
//	struct node *prev;
//};
//
//typedef struct node node;
//
//int isempty(stack *q) {
//	return (q->cnt == 0);
//}
//
//void push(stack *q, int x) {
//	node *temp = (node *) malloc(sizeof(node));
//	temp->data = x;
//	temp->next = NULL;
//	temp->prev = q->rear;
//	if (isempty(q)) {
//		q->front = temp;
//		q->rear = temp;
//	} else {
//		temp->prev = q->rear;
//		q->rear->next = temp;
//		q->rear = temp;
//	}
//}

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node node;

node *front = NULL;
node *rear = NULL;
int isEmpty() {
	if (front == NULL)
		return 1;
	else
		return 0;
}

void push() {
	node *temp = NULL;
	temp = (node *) malloc(sizeof(node));
	if (isEmpty()) {
		printf("Stack Listesi Bos.\n");
		front = rear = temp;
		front->next = NULL;
		front->prev = NULL;
	} else {
		temp->prev = rear;
		temp->next = NULL;
		rear->next = temp;
		rear = rear->next;
	}
	printf("Bir Deger Giriniz : ");
	scanf("%d", &temp->data);
}

void pop() {
	node *temp = NULL;
	if (isEmpty())
		printf("Stack Listesi Bos.\n");
	else if (front == rear) { //stackta son eleman cikartilirken frontu null yaparsin ki stack listesinin bos oldugu anlasilsin...
		temp = front;
		printf("Cikartilan Stack Elemani : %d\n", temp->data);
		free(temp);
		front = NULL;
		rear = NULL;
	} else {
		temp = rear;
		printf("Cikartilan Stack Elemani : %d\n", temp->data);
		rear = rear->prev;
		free(temp);
		rear->next = NULL;
	}
}

void display() {
	node *temp = front;
	if (isEmpty())
		printf("Stack Listesi Bos.\n");
	else {
		for (int i = 0; temp != NULL; i++) {
			printf("%d. Veri : %d\n", i + 1, temp->data);
			temp = temp->next;
		}
	}
}

int main() {
	int secim;
	while (1) {
		printf(
				"1-)Stack List'e Ekle\n2-)Stack Listeden Cikart\n3-)Stack List'i Goster\n4-)Cikis\n");
		scanf("%d", &secim);
		switch (secim) {
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Gecersiz Sayi Girdiniz. Lutfen Tekrar Deneyiniz !\n");
			break;
		}
	}
}

