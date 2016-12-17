#include <stdio.h>
#include <string.h>

int main() {
	char a[20];

	printf("Bir Cumle Giriniz : ");
	gets(a);
	int sayac = 0;
	int i = 0;

	for (i = 0; a[i] != '\0'; i++) {//bosluklari sayiyor.bosluklar bittiginde sayaci 1 arttirir.
		//(bosluk sayisi + 1) son kelimeyi almak icin.girdigin cumleye bak anlarsin.
		if (a[i] == ' ')
			sayac++;
	}
	printf("Cumledeki Kelime Sayisi : %d", sayac + 1);
}
