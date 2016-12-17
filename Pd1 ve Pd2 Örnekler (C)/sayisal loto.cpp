#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

void sayisal_loto()
{
	int sayi;
	srand(time(NULL));
	for(int i=1;i<=6;i++){
		
		printf("\n%d. kolon: ",i);
		
		for(int j=1;j<=6;j++){
			sayi=rand()%45+1;
			printf("%d\t",sayi);
		}
	}
	
}

int main()
{
	sayisal_loto();
	
	getch();
}
