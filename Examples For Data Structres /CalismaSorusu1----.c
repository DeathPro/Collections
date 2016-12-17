#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char a[] = "C'de Port Kontrolu";
	char e[30];
	int i;
	int k = 0;
	int c = 0;
	int b = 0;
	int d = 0;
	int j = 0;
	srand(time(NULL));
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			k++;
		}
		if (a[i] == ' ' || a[i + 1] == '\0') {
			while (c != k) {
				b = d + rand() % (k - d + j);
				a[c] = a[b];
				c = c + 1;
			}
			j++;
		}
		if (a[i] == ' ')
			c = c + 1;
		d = c;

	}
	puts(a);

	return 0;
}
