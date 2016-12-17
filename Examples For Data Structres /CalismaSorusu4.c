#include <stdio.h>

int main() {
	char a[25];
	printf("Bir String Giriniz : ");
	gets(a);
	int i = 0;
	int j = 0;
	int sayac = 1;
	for (i = 0; a[i] != '\0'; i++) {
		if (i == 0) {
			printf("%d. Satir : %c\n", sayac, a[i]);
			sayac++;
		} else {
			printf("%d. Satir : ", sayac);
			while (j < sayac) {
				printf("%c", a[i]);
				i++;
				j++;
				if(a[i]=='\0')
					break;
			}
			i--;
			j = 0;
			printf("\n");
			sayac++;
		}
	}

	return 0;
}
