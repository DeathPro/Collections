#include <stdio.h>
#include <stdlib.h>

struct queue {
	int data;
	struct queue *next;
};

typedef struct queue node;

node *front = NULL;
node *rear = NULL; //rear hep sonu gosteriyor. Eger sonu gosteren pointer kullanmasaydik
//mesela bi eleman ekliceksin.temp pointer i o dugumu gostersin.head den baslicak (Yani fronttan)
//taaaa NULL gorene kadar ilerlicek ki siranin sonuna ekleme yapabilsin.Buda uzun siralar icin vakit
//kaybi olacaktir.Bu yuzden son dugumu gostermesi icin rear pointerini atadim...

void enqueue(int eleman) {
	node *temp;
	temp = (node *) malloc(sizeof(node));
	temp->data = eleman;
	temp->next = NULL;
	if (front == NULL && rear == NULL) { //Sira bossa ilk eleman eklendiginde front ve rear tek seferligine ayni node u gosterecek.
		front = temp;
		rear = temp;
	} else {
		rear->next = temp;
		rear = rear->next;
	}
}

void dequeue() {
	node *temp;
	if (front == NULL)
		printf("Sira Bos !\n");
	else {
		temp = front;
		front = front->next;
		if (front == NULL)
			rear = NULL;
		//front null a esitse sira bos demektir.Bu yuzden de
		// rear null i gostersin dedim.cunku en son rear in gosterdigi dugum silinecek.
		//ondan sonra rear bos kalacak.pointer oldugundan hafizada gosterilmeyecek yerleri gostermemesi icin
		//(  "Segmentation fault. Core dumped." daha once yazdigim kodlarda boyle hata aliyordum !!!)  null i gostersin dedim...
		free(temp);
	}
}

void display() {
	node *temp = NULL;
	temp = front;
	int i = 0;
	if (front != NULL) {
		while (temp != NULL) {
			printf("%d. Siranin Verisi : %d\n", i + 1, temp->data);
			i++;
			temp = temp->next;
		}
	} else
		printf("Sira Bos !\n");
}

int main() {
	int secim, numara;
	while (1) {
		printf(
				"1-)Siraya Ekle\n2-)Siradan Cikar\n3-)Sirayi Goster\n4-)Cikis\n");
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
