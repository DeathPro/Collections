#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct n
{
	int numara;
	char isim[40];
	struct n *next;
};

typedef struct n node;

node *head;

void listeOlustur()
{
	int i;
	int n;
	node *temp;
	temp = head;
	
	printf("Kac Eleman Gireceksiniz: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		
		if (i == 0)
		{
			head = (node *)malloc(sizeof(node));
			printf("%d. Verileri Giriniz: ", i + 1);
			scanf("%d %s", &head->numara, head->isim);
			head->next = NULL;
			temp = head;
		}
		
		else
		{
			
			temp->next = (node *)malloc(sizeof(node));
			temp = temp->next;
			printf("%d. Verileri Giriniz: ", i + 1);
			scanf("%d %s", &temp->numara, temp->isim);
			temp->next = NULL;
		}
	}
}

void yazdir()
{
	node *temp;
	temp = head;
	int i = 1;
	printf("\n");
	while (temp != NULL)
	{
		printf("\n%d. Eleman Verileri: %d %s", i,temp->numara,temp->isim);
		temp = temp->next;
		i++;
	}
}

void listeEkle()
{
	node *temp, *temp2,*yeni;
	temp = head;
	int n;
	printf("Eleman Numarasini Giriniz (Eger Sona Eklemek Istiyorsaniz 0 Giriniz): ");
	scanf("%d", &n);

	if (head->numara==n)
	{
		yeni = (node *)malloc(sizeof(node));
		printf("Verileri Giriniz: ");
		scanf("%d %s", &yeni->numara, yeni->isim);
		yeni->next = head;
		head = yeni;
	}
	else
	{
		if (n == 0)
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			yeni = (node *)malloc(sizeof(node));
			printf("Verileri Giriniz: ");
			scanf("%d %s", &yeni->numara, yeni->isim);
			temp->next = yeni;
			yeni->next = NULL;
		}
		else
		{
			temp2 = temp->next;
			while (temp2->numara != n)
			{
				temp = temp->next;
				temp2 = temp2->next;
			}
			yeni = (node *)malloc(sizeof(node));
			printf("Verileri Giriniz: ");
			scanf("%d %s", &yeni->numara, yeni->isim);
			yeni->next = temp2;
			temp->next = yeni;
		}
	}
	
	
}

void listeSilme()
{
	node *temp,*temp2;
	temp = head;
	int n;
	printf("Silmek Istediginiz Eleman Numarasini Giriniz: ");
	scanf("%d", &n);

	if (head->numara == n)
	{
		head = head->next;
		free(temp);
	}
	else
	{
		temp2 = temp->next;
		while (temp2->numara!=n)
		{
			temp2 = temp2->next;
			temp = temp->next;
		}
		temp->next = temp2->next;
		free(temp2);
	}
}
void en_uzun_isim()
{
	node *temp, *temp2;
	temp = head;
	temp2 = temp->next;
	char a[40];
	while (temp->next!=NULL)
	{
		if (strlen(temp2->isim) > strlen(temp->isim))
		{
			strcpy(a, temp2->isim);
		}
		else
		{
			temp2 = temp2->next;
		}
		if (temp2==NULL)
		{
			temp = temp->next;
			temp2 = temp->next;
		}
	}
	printf("En Uzun Isim: ");
	puts(a);
}

int main()
{
	int selection = 0;

	while (1)
	{
		printf("\n\nMake Your Chose: \n1-)Liste Olustur\n2-)Liste Ekle\n3-)Liste Sil\n4-)En Uzun Isim\n5-)Cikis\n");
		scanf("%d", &selection);

		switch (selection)
		{
		case 1:listeOlustur(); yazdir(); break;
		case 2:listeEkle(); yazdir(); break;
		case 3:listeSilme(); yazdir(); break;
		case 4:en_uzun_isim(); break;
		case 5:exit(0); break;
		default: printf("Yanlis Secim !"); break;
		}
	}
}
