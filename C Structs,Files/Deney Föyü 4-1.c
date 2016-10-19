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

node *root;
node *gezici;

void liste_olustur(node *r, int a)
{
	for (int i = 0; i < a; i++)
	{
		printf("%d. Ismi ve numarasini Giriniz: ",i+1);
		scanf("%s %d", r->isim,&r->numara);
		r->next = (node*)malloc(sizeof(node));
		r = r->next;
	}
	r = root;
}
void yazdir(node *r, int a)
{
	for (int i = 0; i < a; i++)
	{
		printf("Girilen %d. Isim:%s\n",r->numara ,r->isim);
		r = r->next;
	}
	r = root;
}
void liste_ekle(node *r)
{
	int kayitNo;
	node *p, *q, *yeni;
	yeni = (node*)malloc(sizeof(node));
	printf("Eklenecek Ismi Gir: ");
	scanf("%s", yeni->isim);
	printf("Hangi Kayit Numarasindan Once Eklenecek ?");
	scanf("%d", &kayitNo);

	p = r;
	if (p->numara == kayitNo)//Basa Eklenecekse
	{
		yeni->next = root;
		root = yeni;
	}
	else
	{
		while (p->next!=NULL && p->numara!=kayitNo)
		{
			q = p;
			p = p->next;
		}
		if(p==NULL) //Sona eklenecekse
		{
			q->next = yeni;
			yeni->next = NULL;
		}
		else if (p->numara == kayitNo)//Araya Eklenecekse
		{
			yeni->next = p;
			q->next = yeni;
		}
	}
}
int main(void)
{
	root = (node*)malloc(sizeof(node));
	gezici = root;
	int a;
	printf("Girmek Istediginiz Eleman Sayisi: ");
	scanf("%d", &a);
	
	
	while (1)
	{
		int secim;
		printf("Make your chose: 1-)Liste Olustur\n2-)Liste Ekle\n3-)Liste Sil\n2-)Cýkýs\n");
		scanf("%d", &secim);
		switch (secim)
		{
		case 1:liste_olustur(gezici,a); yazdir(gezici,a); break;
		case 3:liste_ekle(gezici); yazdir(gezici, a); break;
		case 2:exit(0);
		default: break;
		}
	}
	

	getch();
	return 0;

}