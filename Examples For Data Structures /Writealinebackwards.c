#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void sozcukgeriyazimi()
{
	char c;
	if((c = getchar()) != '\n') //Karakter belirtirken tek tirnak kullanilir...
		sozcukgeriyazimi();

	putchar(c);
}



int main()
{
	printf("Bir Cumle Giriniz: ");
	sozcukgeriyazimi();

	return 0;
}
