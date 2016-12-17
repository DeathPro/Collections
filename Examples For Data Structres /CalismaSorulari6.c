#include <stdio.h>
#include <stdlib.h>

struct dugum {
	int deger;
	struct dugum *next;
};

typedef struct dugum node;

node *head;
node *temp;
void CreateList() {

	if (head == NULL) {
		head = (node *) malloc(sizeof(node));
		printf("Bir Deger Giriniz : ");
		scanf("%d", &head->deger);
		temp = head;
	} else {
		temp->next = (node *) malloc(sizeof(node));
		temp = temp->next;
		printf("Bir Deger Giriniz : ");
		scanf("%d", &temp->deger);
		temp->next = NULL;
	}

}
float ortalamaBul(node *head) {
	node *temp1;
	temp1 = head;
	float toplam = 0, ortalama = 0;
	int sayac = 0;
	while (temp1 != NULL) {
		if (temp1->deger % 15 == 0) {
			toplam = toplam + temp1->deger;
			sayac++;
		}
		temp1 = temp1->next;
	}
	ortalama = toplam / sayac;
	return ortalama;

}
int main() {
	int a = 0;
	printf(
			"Liste Olusturmak veya Eklemek Istiyor musunuz ? (Cikmak Icin -1 Girin)\n");
	scanf("%d", &a);
	while (a != -1) {

		CreateList();
		printf("Liste Olusturmak veya Eklemek Istiyor musunuz ? (Cikmak Icin -1 Girin)\n");
		scanf("%d", &a);
	}
	printf("Degerlerin Ortalamasi : %.2f", ortalamaBul(head));
}
