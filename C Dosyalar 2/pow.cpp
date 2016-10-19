#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)

{
	int x,y,sonuc;
	
	printf("sayi gir: \t");
	scanf("%d",&x);
	printf("sayi girin: \t");
	scanf("%d",&y);
	sonuc=pow(x,y);
	
	printf("pow sonuc %d ",sonuc);
}
