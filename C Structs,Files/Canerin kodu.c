#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

struct listyapi
{
	char adi[21];
	struct listyapi *sonraki;
};
typedef struct listyapi listnode; //artýk listyapi yerine listnode kullanýlacak
typedef listnode *listptr; // *listptr listnode tipinde bir iþaretçidir.
listptr headnode; /* Herzaman listenin basini gosterir */
void seeklist(char *searchthis, listptr *prevnode) //listede arama yapar
{
	listptr c;
	c = headnode;
	*prevnode = c;
	while ((c->sonraki != NULL))
	{
		c = c->sonraki;
		if (strcmp(c->adi, searchthis) >= 0) break;
		*prevnode = c;
	}
}
void kayit(char *s)
/* prevnode kayidi newnode kayidini, newnode kayidi prevnode'nin daha once gosterdigi kayidini gosterir. */
{
	listptr newnode, prevnode;
	newnode = (listptr)malloc(sizeof(listnode)); /* yeni kayida yer a‡ */
	
	strcpy(newnode->adi, s); /*bilgiyi yeni kayida yaz */
	seeklist(newnode->adi, &prevnode); /* listedeki yerini bul */
	newnode->sonraki = prevnode->sonraki; /* listeye ekle */
	prevnode->sonraki = newnode;
}
void iptal(char *s)
/* newnode kayidi silinir. prevnode kayidi newnode kayidinin gosterdigi kayidini gosterir. */
{
	listptr newnode, prevnode;
	seeklist(s, &prevnode);
	newnode = prevnode->sonraki;
	prevnode->sonraki = newnode->sonraki;
	free(newnode);
}
void listlist(void)
{
	listptr currentnode;
	currentnode = headnode;
	if (currentnode != NULL) currentnode = currentnode->sonraki;
	while (currentnode != NULL)
	{
		printf("%s ", currentnode->adi);
		currentnode = currentnode->sonraki;
	}
	printf("\n");
}
void ebUz(void)
{
	int ln, cnt;
	listptr currentnode, findnode;
	currentnode = headnode;
	if (currentnode != NULL)
	{
		currentnode = currentnode->sonraki;
		ln = 0;
		cnt = 0;
	}
	findnode = currentnode;
	while (currentnode != NULL);
		
	{
		cnt++;
		if (strlen(currentnode->adi) >= strlen(findnode->adi))
		{
			findnode = currentnode;
			ln = cnt;
		}
		currentnode = currentnode->sonraki;
	}
	printf("%s %d %d", findnode->adi, ln, cnt);
	getchar();
} /* En uzun isim; */
void main()
{
	char sec;
	char *s[40];
	headnode = (listptr)malloc(sizeof(*headnode));
	strcpy(headnode->adi, " listenin basi");
	headnode->sonraki = NULL;
	do
	{
		system("cls");
		listlist();
		printf("\n\n1 - Giris\n2 - iptal\n3 - En Uzun isim\n4 - Son\n\nSec :");
		sec = _getche();
		switch (sec)
		{
		case '1':
			printf("\nAdi :");
			gets(s);
			kayit(s);
			break;
		case '2':
			printf("Adi \n");
			gets(s);
			iptal(s);
			break;
		case '3':
			ebUz();
			break;
		case '4':
			exit(0);
			
				break;
		}
	} while (1);
}