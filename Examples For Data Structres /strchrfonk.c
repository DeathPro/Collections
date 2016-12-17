#include <stdio.h>
#include <string.h>

int main() {
	char a[] = "Bilgisayar";
	char *p;
	p = a;
	printf("%s\n", strchr(a, 'a')); //buldugu ilk a harfinden itibaren null a kadar yazdirir.

	printf("%c", *p);
	return 0;
}
