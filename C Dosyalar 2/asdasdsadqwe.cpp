#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <conio.h>
struct sahis_bilgileri
{
	char isim[40];
};



struct sahis_bilgileri kisi;

int main(void)
{
	
	printf("Bir isim giriniz:\t");
	gets(kisi.isim);
	
	printf("Girilen isim: %s",kisi.isim);
	getch();
}
