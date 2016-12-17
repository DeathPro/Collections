#include<stdio.h>

int main(int argc, char **argv) {
	//node *temp = (node *)malloc (sizeof(node));
	//Baska bir ornek
	printf("1 / 2 = %f\n", 1 / 2);
	printf("1 / 2 = %.2f\n", (float) 1 / 2);
	int a;
	double b;
	double ortalama;
	printf("1. Sayiyi Giriniz : ");
	scanf("%d", &a);
	printf("2. Sayiyi Giriniz : ");
	scanf("%lf", &b);
	//printf("a+b=%f", a + b);
	ortalama = (a + b) / 2; //burda (5+6)/2 oldugunda sonucu 5.00 olarak gosterir ama
	printf("\n2 Sayinin Ortalamasi : %.2lf\n", ortalama);
	ortalama = (double) (a + b) / 2; //bu sekilde casting operatorunu cikan sonucu
	//double veri tipine cevirerek ortalama double degiskenine atar ve sonuc 5.50 olur
	//cast kullanmakla ugrasmak istemiyosan degiskenlerden en az bir tanesini
	//double yap ayni sonuc olur...
	printf("2 Sayinin Ortalamasi : %.2lf\n", ortalama);

	return 0;
}
