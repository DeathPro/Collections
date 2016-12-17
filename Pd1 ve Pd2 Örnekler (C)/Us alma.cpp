#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


int us_alma(int x,int y)
{
	int sonuc=1,i;
	
	for(i=1;i<=y;i++)
	{
		sonuc=sonuc*x;
		
	}
	
	return sonuc;
}

int main()
{
	int taban,us;
	
	printf("Taban Giriniz: \n");	scanf("%d",&taban);
	printf("Us Giriniz: \n");		scanf("%d",&us);
	printf("%d",us_alma(taban,us));
}
