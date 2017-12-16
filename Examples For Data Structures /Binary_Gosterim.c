#include <stdio.h>

void decimal_to_binary(int sayi){
	if (sayi < 2){
		printf("%d",sayi);
		return;
	}
	int temp;
	temp = sayi % 2;
	sayi = sayi / 2;
	decimal_to_binary(sayi);
	printf("%d",temp);
}
int main(int argc, char **argv){
	int sayi = 0;
	printf("Onluk Tabanda Bir Sayi Giriniz : ");
	scanf("%d",&sayi);
	printf("Girilen Sayinin Binary Hali : ");
	decimal_to_binary(sayi);
	return 0;
}
