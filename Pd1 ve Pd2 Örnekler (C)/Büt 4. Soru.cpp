//strcat te 2.yi 1. ye ekliyor. 
//strcpy de 2. yi 1. nin üzerine yazýyor yani kopyalýyor.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[40]="Ali", b[40]="Ahmet", c[100]=" ";
	
	strcpy(a,b);
	puts(a);
	strcat(a,c);
	puts(c);
	strcat(a," merhaba");
	puts(a);
	printf("%s",strchr(a,'a'));
}
