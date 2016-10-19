#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct n {
	int numara;
	char isim[40];
	struct n *next;
};
typedef struct n node;
node *head;

void listeOlustur()
{
	int i,n;
	node *temp=NULL;

	printf("Kac Eleman Gireceksiniz: ");
	scanf("%d", &n);
	for ( i=0 ; i < n; i++)
	{
		if (i == 0)
		{
			head = (node*)malloc(sizeof(node));
			head->next = NULL;
			temp = head;
		}
		else
		{
			temp->next = (node*)malloc(sizeof(node));
			temp = temp->next;
			temp->next = NULL;
		}
		printf("Eleman Verilerini Giriniz: ");
		scanf("%d %s", &temp->numara, temp->isim);
	}
}

void yazdir()
{
	node *temp;
	temp = head;
	
	while (temp!=NULL)
	{
		printf("\n%d %s\n", temp->numara, temp->isim);
		temp = temp->next;
	}
}
void listeEkle()
{
	int kayitNo = 0;
	node *temp, *yeni,*temp2;
	temp = head;
	temp2=head;
	printf("Hangi Kayit Numarasina Eklemek Istiyorsunuz ? (Eðer Sona Eklemel Isterseniz Kayit Numarasini 0 Giriniz!!!)\n");
	scanf("%d", &kayitNo);
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	if (kayitNo==head->numara)//Basa Eklenecekse 
	{
		yeni = (node *)malloc(sizeof(node));
		printf("Yeni Eklenecek Veriyi Giriniz: ");
		scanf("%d %s", &yeni->numara, yeni->isim);
		yeni->next = head;
		head = yeni;
	}
	
	else if(kayitNo==0)
	{
		yeni=(node *)malloc(sizeof(node));
		printf("Yeni Eklenecek Veriyi Giriniz: ");
		scanf("%d %s", &yeni->numara, yeni->isim);
		temp2->next=yeni;
		yeni->next=NULL;
	}	
	else 
	{
		
		yeni = (node*)malloc(sizeof(node));
		printf("Yeni Eklenecek Veriyi Giriniz: ");
		scanf("%d %s", &yeni->numara, yeni->isim);
		while(kayitNo!=temp->next->numara)
		{
			temp=temp->next;
		}
		yeni->next=temp->next;
		temp->next=yeni;
	}
	
	
}
int main(void)
{
	int selection = 0;
	
	while (1)
	{
		printf("\nMake Your Chose: \n1-)Liste Olustur\n2-)Liste Ekle\n3-)Liste Sil\n4-)Cikis\n");
		scanf("%d", &selection);

		switch (selection)
		{
		case 1:listeOlustur(); yazdir(); break;
		case 2:listeEkle(); yazdir(); break;
		case 3: break;
		case 4:exit(0); break;
		default: printf("Yanlis Secim !"); break;
		}
	}
}
