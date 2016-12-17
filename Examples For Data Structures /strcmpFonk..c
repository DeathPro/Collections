#include <stdio.h>
#include <string.h>

int str_cmp(char *p, char *q) {
	int i = 0;
	int a = 0, b = 0;
	int c;
	if (strlen(p) > strlen(q))
		c = strlen(p);
	else
		c = strlen(q);

	while (i < c) {
		if (*(p + i) > *(q + i))
			a++;
		else if (*(p + i) < *(q + i))
			b++;

		if (p[i] == '\0') //Bunlari yapmasam null ile harfi karsilastiramiyor.Null olani azaltilirim.Cunku daha az harfe sahiptir ve dolayısıyla kucuktur.
			a--;
		else if (q[i] == '\0')
			b--;

		i++;

	}
	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else if (a < b)
		return -1;
}

int main() {
	char dizi1[25];
	char dizi2[25];
	char *p, *q;
	int sonuc = 0;

	printf("Bir Kelime Giriniz : ");
	gets(dizi1);
	printf("Bir Kelime Giriniz : ");
	gets(dizi2);

	p = dizi1;
	q = dizi2;

	printf("str_cmp = %d\n", str_cmp(p, q));
	sonuc = strcmp(p, q);
	printf("\nstrcmp = %d", sonuc);
}
