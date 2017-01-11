#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nothesaplama(int vize , int final)
{
	double ort=(double)vize*0.40 + (double)final*0.60;
	
	if(ort>=90 && ort<=100)
	printf("Ortalama: %.1lf || 'AA'\n",ort);
	else
	if(ort<90 && ort>=70)
	printf("Ortalama: %.1lf || 'BB'\n",ort);
	else
	if(ort<70 && ort>=60)
	printf("Ortalama: %.1lf || 'CC'\n",ort);
	else if(ort<60)
	printf("Ortalama: %.1lf || 'FF'\n",ort);
}

int main()
{
	int vize,final;
	
	printf("Vize Notunuzu Giriniz: ");		scanf("%d",&vize);
	printf("Final Notunuzu Giriniz: ");		scanf("%d",&final);
	
	nothesaplama(vize,final);
	
	return 0;
}
