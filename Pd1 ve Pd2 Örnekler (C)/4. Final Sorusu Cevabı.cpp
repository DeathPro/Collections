#include <stdio.h>

int FonksiyonBir (int a){
	a=a+8;
	return a;
}

void FonksiyonIki (int deger){
	printf("Giris = %d \n",deger++);
	printf("Sonuc 1=%d \n",++deger);
}

void FonksiyonUc(int *y){
	(*y) += 10;
}

void FonksiyonDort (int *y){
	FonksiyonUc(y);
}

int main(){
	int a=-6,b=5,c=2;
	int *bPtr = &b;
	printf("Cikti=%d\n",FonksiyonBir(a));
	FonksiyonIki(b+c);
	FonksiyonUc(&b);
	printf("Sonuc 2= %d\n",b);
	FonksiyonDort(bPtr);
	printf("Sonuc 3 = %d\n",b);
}
