#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct n
{
	int x;
	struct n * next;
};
typedef struct n node;

void bastir(node *r)
{
	while (r != NULL)
	{
		printf("%d\n", r->x);
		r = r->next;
	}
}

void ekle(node *r, int x)
{
	while(r->next!= NULL) {
		r = r->next;
	}
	r->next = (node*)malloc(sizeof(node));
	r->next->x = x;
	r->next->next = NULL;
	printf("%d\n", r->next->x);
}

int main(void)
{
	int i;
	node *root;
	root = (node*)malloc(sizeof(node));
	root->x = 500;
	for (i = 0; i < 5; i++)
	{
		ekle(root, i*10);
	}
	bastir(root);

	getch();
	return 0;
}


