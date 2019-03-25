#include <stdio.h>

int main()
{
	char chrDizi[]={'a','b','c','d'};
	char *p;
	p=chrDizi;
	p++;
	//int intDizi[]={1,2,3,4};
	//value of chrDizi
	//int i;
	//for (i = 0; i<4; i++)
		//printf("chrDizi[%d] = %c\n",i,*(chrDizi+i));
		printf("\n%c",*p);
		printf("\n%c",*(chrDizi+1));
	//&karakterler[0] = ilk elemanın adresidir.
	//karakterler = buda ilk elemanının adresidir çünkü dizide bir pointerdır.
}
