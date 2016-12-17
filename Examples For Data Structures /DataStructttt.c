/*
 * DataStructttt.c
 *
 *  Created on: Oct 5, 2016
 *      Author: deathpro
 */


#include <stdio.h>

int main()
{
	int *p;
	int a=5;
	int b=2;
	int c[5];
	p=&a;
	b=*p;
	printf("%d\n",*p);
	printf("%d\n",b);
	printf("%p\n",c); // %p adresi gösterir.
	printf("%p\n",c[0]);
	printf("%p\n",p[2]);
	printf("%p\n",p);
	return 0;
}
