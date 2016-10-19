#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct stud
{

	int id;
	char name[25];
	int yas;
	struct stud *next;


};
typedef struct stud node;
node *listeolustur(int);
void ekle(node **);
void sil(node * *);
void goster(node *);



int  main()
{
	char sec;
	node *head;
	int n;
	while (1)
	{

		printf("\n1-Liste olustur\n2-Listele\n3-Ekle\n4-sil\n5-Exit\n");
		printf("Islemi sec=");
		sec = getch();
		switch (sec)
		{
		case '1':
		{

			printf("\nEleman sayisini giriniz...:"); scanf("%d", &n);
			head = listeolustur(n);
			break;
		}
		case '2':
		{
			goster(head);
			break;
		}
		case '3':
		{
			ekle(&head);
			break;
		}
		case '4':
		{

			sil(&head);
			break;
		}
		case '5':
		{
			exit(0);
		}


		}
	}

	return 0;

}
node *listeolustur(int n)
{
	node *head, *p;
	int i;
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			head = (node *)malloc(sizeof(node));
			p = head;
		}
		else
		{
			p->next = (node *)malloc(sizeof(node));
			p = p->next;
		}
		scanf("%d %s %d", &p->id, p->name, &p->yas);
	}
	p->next = NULL;
	return head;

}
void ekle(node **head)
{
	int nereye;
	node *new_, *p, *q;
	new_ = (node *)malloc(sizeof(node));
	printf("\nYeni dugum bilgileri="); scanf("%d %s %d", &new_->id, new_->name, &new_->yas);
	printf("Nereye eklensin..:"); scanf("%d", &nereye);
	p = *head;
	if (p->id == nereye)
	{
		new_->next = p;
		*head = new_;
	}
	else
	{
		while (p != NULL && p->id != nereye)
		{
			q = p;
			p = p->next;
		}
		if (p == NULL)
		{
			q->next = new_;
			new_->next = NULL;
		}
		else
		{
			new_->next = p;
			q->next = new_;
		}
	}

}
void sil(node **head)
{
	node  *p, *q;
	int n;
	printf("\nHangisi silinecek::"); scanf("%d", &n);
	p = *head;
	if (p->id == n)
	{
		*head = p->next;
		free(p);

	}
	else
	{
		while (p != NULL && p->id != n)
		{
			q = p;
			p = p->next;
		}
		if (p == NULL)
		{
			printf("\nDegisecek dugum bulunamadý");
		}
		else
		{
			q->next = p->next;
			free(p);
		}
	}

}
void goster(node *p)
{
	for (p; p != NULL; p = p->next)
	{
		printf("\n%d %s %d\n", p->id, p->name, p->yas);
	}
}
