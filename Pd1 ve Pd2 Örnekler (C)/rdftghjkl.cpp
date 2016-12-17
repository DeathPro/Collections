#include <stdio.h>
#include <conio.h>
	int Toplam(int x, int y){
		int sonuc=0;
		
		sonuc = x + y;
		return sonuc;
	}
	int main(){
	int sayi1, sayi2;
	printf("Bir Sayi Giriniz:");
	scanf("%d", &sayi1);
	printf("Bir Sayi Giriniz:");
	scanf("%d", &sayi2);
	printf("Sayilarin Toplami: %d", Toplam(sayi1, sayi2));
	getch();
	return 0;

}
