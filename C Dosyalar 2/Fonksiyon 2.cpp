//iki tamsayýyý toplayýp sonucu sonuc adlý deðiþkene aktarýr

#include <stdio.h>

int sonuc(int x,int y);

int main(void)
{
	int sayi1,sayi2;
	printf("bir sayi girin: \n");
	scanf("%d",&sayi1);
	printf("bir sayi girin: \n");
	scanf("%d",&sayi2);
	
	printf("%d",sonuc(sayi1,sayi2));
	
	return 0;
	
}

int sonuc(int x,int y)
{
	return x+y;
}
