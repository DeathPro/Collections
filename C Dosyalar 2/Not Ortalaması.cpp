#include <stdio.h>
#include <conio.h>
int main(void)
{
	int Not,i,Toplam,Ortalama;	
	
	Toplam=0;
	
	
	printf("Bir Not Girin:\t");
	scanf("%d", &Not);
	
	for(i=0;Not!=-1;i++){
		Toplam=Toplam+Not;
		
		printf("Bir Not Girin:\t");
		scanf("%d", &Not);
	}
		
	Ortalama=Toplam/i;
	printf("Sinifin Not Ortalamasi %d",Ortalama);
	
	getch();
	return 0;
	
	}
