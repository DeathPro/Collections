//Kendisine argüman olarak verilen bir tamsayýyý tersine çevirip, sonucu ekrana yazacak bir fonksiyon yazýnýz.

#include <stdio.h>

void ters(int x);

void main()
{
	int sayi,sondeger,gecici,ters;
	
	printf("Bir sayi girin: ");
	scanf("%d",&sayi);
		sayi=gecici;
return 0;
}

void ters(int x)
{

	
	while(x>0)
	{
		gecici=sayi%10;
		printf("%d",gecici);
		gecici=sayi/10;
		
	}
	
		printf("%d",ters(sondeger));
}
