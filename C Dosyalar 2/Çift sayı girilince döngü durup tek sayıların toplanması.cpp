#include <stdio.h>


int main(void)

{
	int i=1,sayi,toplam=0;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi%2==1)
	{
	toplam=toplam+sayi;
		
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		
	}
	printf("Toplamlar %d",toplam);
}
