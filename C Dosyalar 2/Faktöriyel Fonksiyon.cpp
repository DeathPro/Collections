#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>

int faktoriyel(int sayi)
{
	int i,sonuc=1;
	
	for(i=1;i<=sayi;i++)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}

int main()
{
	int sayi1;
	
	printf("sayi girin: ");		scanf("%d",&sayi1);
	printf("%d",faktoriyel(sayi1));
}
