#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kisiler
{
	int numara;
	char isim[40];
	struct kisiler *next;
};
typedef struct kisiler node;

node *head;

node *listeOlustur()
{
	int i, n;
	node *p, *head;
	printf("Kaç Eleman Gireceksiniz: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			head = (node*)malloc(sizeof(node));
			p = head;
		}
		else
		{
			p->next = (node *)malloc(sizeof(node));
			p = p->next;
		}
		printf("Eleman Ismini ve Numarasini Giriniz: ");
		scanf("%d %s", &p->numara, p->isim);
	}
	p->next = NULL;
	return head;
}
void yazdir(node *head)
{
	int sayac = 1;
	node *p;
	p = head;
	while (p != NULL)
	{
		printf("Node %d: %s %d", sayac, p->isim, p->numara);
		sayac++;
		p = p->next;
		printf("\n");
	}
}
void listeEkle(node **head)
{
	int kayitNo;
	node *p, *q, *yeni;
	yeni = (node*)malloc(sizeof(node));
	printf("\nEklenecek Veriyi Girin: ");
	scanf("%s %d", yeni->isim, &yeni->numara);

	printf("Hangi Kayit Numarasindan Once Eklenecek: ");
	scanf("%d", &kayitNo);
	p = *head;
	if (p->numara == kayitNo)//Basa Eklenecekse
	{
		yeni->next = p;
		*head = yeni;
	}
	else
	{
		while (p->next != NULL && p->numara != kayitNo)
		{
			q = p;
			p = p->next;
		}
		if (p = NULL)//Sona Eklenecekse
		{
			q->next = yeni;
			yeni->next = NULL;
		}
		else if (p->numara == kayitNo)
		{
			yeni->next = p;
			q->next = yeni;
		}
	}
}

void listeSil(node **head)
{
	int kayitNo;
	node *p, *q;
	printf("Hangi Kayit No Silinecek: ");
	scanf("%d", &kayitNo);
	p = *head;
	if (p->numara == kayitNo)//ilk node siliniyorsa
	{

		head = p->next;
		free(p);
	}
	else
	{
		while (p->next != NULL && p->numara != kayitNo)
		{
			q = p;
			p = p->next;
		}
		if (p == NULL)
		{
			printf("Uygun Kayit Bulunamadi.Silme Basarisiz!!");
		}
		else if (p->numara == kayitNo)
		{
			q->next = p->next;
			free(p);
		}
	}
}

int main(void)
{
	int selection = 0;
	node *aktif;
	while (1)
	{
		printf("Make Your Chose: 1-)Liste Olustur\n2-)Liste Ekle\n3-)Liste Sil\n4-)Cikis\n");
		scanf("%d", &selection);

		switch (selection)
		{
		case 1:aktif = listeOlustur(); yazdir(aktif); break;
		case 2:listeEkle(&aktif); yazdir(aktif); break;
		case 3:listeSil(&aktif); yazdir(aktif); break;
		case 4:exit(0); break;
		default: printf("Yanlis Secim !"); break;
		}
	}
}

