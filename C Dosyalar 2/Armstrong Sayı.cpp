#include <stdio.h>
#include <conio.h>

int main(void)
{
	int sayi,gecici,sonuc=0,basDegeri;
	printf("Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	gecici=sayi;
	while(gecici>0){
	basDegeri = gecici % 10;
	sonuc+=basDegeri * basDegeri * basDegeri;
	gecici /= 10;	
	}
	printf("Rakamlarinin kuplerinin toplami %d",sonuc);
	
	if(sayi==sonuc){
		printf("\n%d Armstrong Sayisidir",sayi);
	}
	else{
		printf("\n%d Armstrong Sayisi Degildir",sayi);
	}
	getch();
	return 0;
}
