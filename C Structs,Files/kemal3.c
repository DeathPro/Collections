#include <stdio.h>
#include <stdlib.h>

struct stud
{
int sayi;
struct stud *next;	
};
typedef struct stud data;

int main()
{
	data *head,*p;
	int dizi[10];
	int i,n=0;
	for(i=0;i<10;i++)
	{
		printf("%d. sayiyi giriniz...:",i+1);scanf("%d",&dizi[i]);
	}
	for(i=0;i<10;i++)
	{
		if(dizi[i]%2==1)
		{
			
			if(n==0)
			{
				n++;
				head=(data *)malloc(sizeof(data));
				p=head;
			}
			else
			{
				p->next=(data *)malloc(sizeof(data));
				p=p->next;
			}
			p->sayi=dizi[i];
			
			
		}
	}
	p->next=NULL;
	p=head;
	
	for(p;p!=NULL;p=p->next)
	{
		
		printf("%d\n",p->sayi);
	}
	
}
