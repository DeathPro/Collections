#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void nothesaplama(int vize , int final)
{
	double ort=(double)vize*0.40 + (double)final*0.60;
	
	if(ort>=90 && ort<=100)
	printf("Ortalama: %.1lf || 'AA'",ort);
	else
	if(ort<90 && ort>=70)
	printf("Ortalama: %.1lf || 'BB'",ort);
	else
	if(ort<70 && ort>=55)
	printf("Ortalama: %.1lf || 'CC'",ort);
	else
	if(ort<55 && ort>=30)
	printf("Ortalama: %.1lf || 'DD'",ort);
	else
	printf("Ortalama: %.1lf || 'FF'",ort);
}

int main()
{
	int vize,final;
	
	printf("Vize Notunuzu Giriniz: ");		scanf("%d",&vize);
	printf("Final Notunuzu Giriniz: ");		scanf("%d",&final);
	
	nothesaplama(vize,final);
	
	getch();
	
	return 0;
}
