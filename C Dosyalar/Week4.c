#include <stdio.h>

int main() {

	// &i="234FE0"; => Boylr bise olmaz bilgisayar rastgele adres atar esitligin
	//sol tarafinda " & " olmaz.
	int i = 5;
	int *s = &i;
	char *p;
	char a[25] = "adlsfsknbpof";
	p = &a;
	printf("Adress of i(Directly) = %p\n", &i);	//adress of i
	printf("Adress of i(Indirect) = %p\n", s);// %x adres degerini gosterir... //adress of i
	printf("Adress of s(Pointer)= %p\n", &s);
	printf("Value of i(Directly) = %d\n", i);	//value of
	printf("Value of i(Indirect) = %d\n", *s);
	printf("Inside of s(Pointer) = %p\n", s);
	printf("Inside of p(Pointer) = %p\n", p);
	printf("Value of Inside Adress of p = %c\n", *p);
	printf("Value of Inside Adress of s = %d\n", *s);
	s++;
	p++;
	printf("Value of Inside Adress of s = %d\n", *s);
	printf("Adress of i[Not Anymore] (Indirect) = %p\n", s);
	printf("Adress of i(Directly) = %p\n", &i);
	printf("Inside of p(Pointer) = %p\n", p);

	//fonksiyonun isminin basinda * varsa adres dondurmeliiiiiii
	return 0;
}
