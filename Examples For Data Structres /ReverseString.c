#include <stdio.h>
#include <string.h>

int main() {
	char a[30];
	char b[30];
	printf("Bir Cumle Giriniz : ");
	gets(a);
	printf("Girdiginiz Cumle : %s\n",a);
	int i = 0;
	int k = 0;
	;
	for (k = strlen(a) - 1; k>=0; k--) {
		b[i] = a[k];
		i++;
	}
	printf("Girilen Cumlenin Tersi : %s",b);
}
