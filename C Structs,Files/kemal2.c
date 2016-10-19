#include <stdio.h>
#include <stdlib.h>

struct bilgi
{
int sayilar;
struct bilgi *sonraki;
	
};
typedef struct bilgi data;

int main()
{
	data *head,*p;
	int i=0,sayi;
	
	do
	{
		printf("Sayi giriniz...:");scanf("%d",&sayi);
		if(sayi>0)
		{
			if(i==0)
			{
				head=(data *)malloc(sizeof(data));
				p=head;
				i++;
			}
			else
			{
				p->sonraki=(data *)malloc(sizeof(data));
				p=p->sonraki;
				
				
			}
			p->sayilar=sayi;
		}
		else
		{
			break;
		}
	}
	while(1);
	p->sonraki=NULL;
	p=head;
	for(p;p!=NULL;p=p->sonraki)
	{
		printf("%d\n",p->sayilar);
	}
	
	return 0;
}
