//parametre olarak gelen 2 sayinin çarpýmýnýn 4 fazlasýný geri döndüren bir fonksiyon yazýn.
#include <stdio.h>

int tp(int x,int y);

int main ()
{
	int sayi1,sayi2;
	printf("Bir Sayi Giriniz: \n");
	scanf("%d",&sayi1);
	printf("Bir Sayi Giriniz: \n");
	scanf("%d",&sayi2);

	printf("%d",tp(sayi1,sayi2));

	return 0;		
}

int tp(int x, int y)
{
	

	
	return 	x*y + 4;
	
}

