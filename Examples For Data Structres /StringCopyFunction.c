#include <stdio.h>
#include <stdlib.h>

int *str_copy(char *,register const char *);//(constant)== fonksiyonun icinde degistirmek istemiyosam
//gonderdigim pointeri ondan .yani const char yazmasanda olur.Complier rahat eder yazarsan...
//eger onu yazip fonksiyonun icinde degistirmeye kalkarsan pointeri hata verir....
int str_len(const char *);

int main()
{
	char c[]="Pointers are important in C";
	//char *s1 = malloc((str_len(c) + 1) * sizeof(char));
	char *s1;
	s1 = malloc((str_len(c) + 1) * sizeof(char));
	printf("%s",str_copy(s1,c));
	printf("\n%d\n",sizeof(*s1));
	return 0;

}

int str_len(const char *c)
{
	int length = 0;
	while(*c++!='\0') // ilk olarak c degerine bakacak sonra arttirmaya bakacak
		length++;
	return length;
}

int *str_copy(char *s1, register const char *c)//void * demek bi pointer dondurecek demek.
{
	//register char *p=s1;
	register char *p;
	p=s1;
	while((*p++=*c++)); // ==while(*c!='\0'){ *p=*c;    p++;    c++;  }
	//ilk once atamalari yapar sonra arttirmalari yapar islemler soldan saga dogru gider...

	return s1;

}
