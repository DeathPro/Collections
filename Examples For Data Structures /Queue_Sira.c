#include <stdio.h>

#define MAX 5
int front = -1;
int rear = -1;
int queue[MAX];
//bu koddaki amac bir sira cikartildiginda sira basinda bosluklar olmamasidir.
int isEmpty() {
	//suanki kodda buradaki ikinci sarta gerek yok
	//bir sira cikartildiginda ilk once frontu ilerletip
	//daha sonrada front ile rear arasindaki sayilari
	//sira basina sirasiyla koyuyoruz
	//sonrada frontu 0 rear i da siranin en sonu yapiyoruz.
	//ama bir sira cikartildiginda sadece front u ilerletiyosak
	//buradaki ikinci sart olmali....
	if ((front == -1 && rear == -1) || front == rear + 1)
		return 1;
	else
		return 0;
}

int isFull() {
	if (rear == MAX - 1)
		return 1;
	else
		return 0;
}
void enqueue(int eleman) {
	if (isEmpty()) {
		front = 0;
		rear = 0;
	} else if (isFull()) {
		printf("Sira Dolu !\n");
		return;
	} else {
		rear++;
	}
	queue[rear] = eleman;

}
void dequeue() {
	int i, a = -1;
	if (isEmpty()) {
		printf("Sira Bos !\n");
	} else if (front == rear) { //yani son eleman silinecekse front ve rear ı baslangic degerlerine dondurelim.
		printf("%d Siradan Silindi\n", queue[front]);
		front = -1;
		rear = -1;

	} else {
		printf("%d Siradan Silindi\n", queue[front]);
		front++;
		for (i = front; i <= rear; i++) {
			a++;
			queue[a] = queue[i];
		}
		front = 0;
		rear = a;
	}
}
void display() {
	int i;
	if (isEmpty())
		printf("Sira Bos !\n");
	else {
		for (i = 0; i <= rear; i++)
			printf("%d  ", queue[i]);
		printf("\n");
	}
}

int main() {
	int secim, numara;
	while (1) {
		printf(
				"1-)Siraya Ekleme\n2-)Siradan Silme\n3-)Sirayi Goster\n4-)Cikis\n");
		scanf("%d", &secim);
		switch (secim) {
		case 1:
			printf("Eklenecek Sayiyi Giriniz : ");
			scanf("%d", &numara);
			enqueue(numara);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("Gecersiz Sayi Girdiniz ! Lutfen Tekrar Deneyiniz. \n");
			break;
		}
	}

}
