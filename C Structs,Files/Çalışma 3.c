#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0, en_uzun_isim = 0, sayac=0;
	char *p;
	char cumle[40];

	printf("Bir Cumle Giriniz: ");
	gets(cumle);

	p = cumle;
	while (1)
	{
		sayac = 0;
		while (*(p + i) != ' ' &&  *(p + i) != NULL)
		{
			sayac++;
			i++;
		}
		if (sayac > en_uzun_isim)
		{
			en_uzun_isim = sayac;
		}
		if (*(p + i) == NULL)
			break;
		i++;
	}
	printf("En Uzun Kelimenin Karakter Sayisi: %d", en_uzun_isim);
	getch();
	return 0;
}