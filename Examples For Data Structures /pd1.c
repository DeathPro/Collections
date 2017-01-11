#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi[1000];
	int i = 0;
	int max, min;

	printf("Sayi Giriniz : ");
	scanf("%d", &sayi[0]);
	max = sayi[0];
	min = sayi[0];
	while (sayi[i] != -1) {
		i++;
		printf("Sayi Giriniz : ");
		scanf("%d", &sayi[i]);
	}
	for (i = 0; sayi[i] != '\0'; i++) {
		if (max < sayi[i])
			max = sayi[i];
		if (min > sayi[i])
			min = sayi[i];
	}
	if (sayi[0] == -1)
		printf("Hic Sayi Girmediniz :(\n");
	else {
		printf("En Buyuk Sayi --> %d\n", max);
		printf("En Kucuk Sayi --> %d\n", min);
	}
	return 0;
}

