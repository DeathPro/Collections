#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void loto(){
	int i,j,sayi=0;
	
	srand(time(NULL));
	for(i=1;i<7;i++){
		printf("\n%d. Satir\t",i);
		for(j=1;j<7;j++){	
			sayi=rand()%99 + 1;
			printf("%d\t",sayi);
		}
	}

}
int main(){
	loto();
}
