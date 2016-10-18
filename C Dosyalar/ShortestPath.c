#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int sayi[10][10];

	srand(time(NULL));
	sayi[1][1]=rand() % 2;
	int i,j;

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			sayi[i][j]=rand() % 2;// 1 + rand() % 100 olsaydi 1 ile 100 arasinda sayi atardi
									// 1 ile 100 dahil
		}
	}

	for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				printf("%d\t",sayi[i][j]);
			}
			printf("\n");
		}

}
