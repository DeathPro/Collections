#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int modsayi(int a) {
	int temp;
	int gecici = 0;
	while (a != 0) {
		temp = a % 10;
		gecici = gecici * 10 + temp;//Bura Cok Onemli !!
		a = a / 10;
	}
	return gecici;

}

int main() {
	int a;
	printf("Bir Sayi Giriniz : ");
	scanf("%d", &a);
	printf("Sayinin Tersi : %d\n", modsayi(a));
	return 0;
}
