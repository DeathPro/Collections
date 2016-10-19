#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct n
{
	int grade;
	char ogrenci [40];
	struct n *next;
};

typedef struct n node;
node *head;


void listeekle()
{
	int n=0, i;
	node *temp;
	temp = head;
	printf("Kac Tane Ogrenci Gireceksiniz: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			head = (node*)malloc(sizeof(node));
			printf("Numara ve Isim Giriniz: ");
			scanf("%d %s", &head->grade, head->ogrenci);
			head->next = NULL;
			temp = head;
		}
		else
		{
			temp->next = (node*)malloc(sizeof(node));
			temp = temp->next;
			printf("Numara ve Isim Giriniz: ");
			scanf("%d %s", &temp->grade, temp->ogrenci);
			
		}

	}
	temp->next = head;
}
void yazdir()
{
	node *temp=head;
	

	if (head->grade >=60)
	{
		printf("%d %s\n", head->grade, head->ogrenci);
		
		
	}
	temp = head->next;
	while (temp!=head)
	{
		if (temp->grade >= 60)
		{
			printf("%d %s\n", temp->grade, temp->ogrenci);
			
		}
		temp = temp->next;
	}
	
}

int main()
{
	listeekle();
	yazdir();
	getch();
	return 0;
}