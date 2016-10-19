#include <stdio.h>
#include <conio.h>

int main (void)
{
	int i,Toplam=0,sayi;
	
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++){
		if(sayi%i==0){
			Toplam=Toplam+i;
		}
	}
	if(Toplam==sayi){
		printf("Bu Sayi Mukemmel Sayidir");
	}
	else{
		printf("Bu Sayi Mukemmel Sayi Degildir");
	}
	getch();
	return 0;
}

