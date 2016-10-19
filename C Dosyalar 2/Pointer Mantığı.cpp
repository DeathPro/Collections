#include <stdio.h>
#include <stdlib.h>

int f(int *a){
	*a=80;
}
int g(int a){
	a=90;
}




int main()
{
	int *p;
	int a=10;
	p=&a;
	printf("%d",*p);
	*p=20;
	printf("\n%d",a);
	f(&a);
	printf("\n%d",a);
	g(a);
	printf("\n%d",a);
}
