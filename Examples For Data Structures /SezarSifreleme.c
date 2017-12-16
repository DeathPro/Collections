#include <stdio.h>
#include <stdlib.h>

int main() {
	char a[30];
	int c = 0;
	char b[30];
	printf("Bir String Giriniz : ");
	gets(a);
	for (int i = 0; a[i] != '\0'; i++) {
		c = a[i];
		if (c >= 65 && c <= 90) {
			c += 3;
			b[i] = c;
		} else if (c >= 97 && c <= 122) {
			c += 3;
			b[i] = c;
		}
		if(a[i]==' ')
			b[i]=' ';

	}
	puts(b);
	return 0;

}
