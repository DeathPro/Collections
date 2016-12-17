#include <stdio.h>

void AsalSayi(int a) {
	int sayac = 0;
	int i = 2;
	if (a == 1) {
		return;
	} else {
		while (i < a) {
			if (a % i == 0)
				sayac++;
			i++;
		}
	}
	if (sayac == 0) {
		AsalSayi(a - 1);
		printf("%d\t", a);
	} else
		AsalSayi(a - 1);

}

int main() {
	int a;
	printf("Bir Sayi Giriniz : ");
	scanf("%d", &a);
	printf("%d Sayisina Kadar Olan Tum Asal Sayilar\n", a);
	AsalSayi(a - 1);

	return 0;
}
