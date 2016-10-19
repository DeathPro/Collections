#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	unsigned short int sayi = 0, mask = 0x8000;
	float kuvvet = 1;
	printf("Istediginiz Deger: ");
	scanf("%d", &sayi);
	while (1)
	{
		if (sayi&mask)
		{
			kuvvet = 16 - kuvvet;
			printf("Deger: %.2f", pow(2, kuvvet));
			break;
		}
		mask= mask >> 1;
		kuvvet++;
	}
	getch();
	return 0;
}