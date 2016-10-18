/*
 * SumRecurisive.c
 *
 *  Created on: Oct 5, 2016
 *      Author: deathpro
 */
#include <stdio.h>

int sum(int n)
{
	if (n<=1)
		return 1;
	else
		return (n + sum(n-1));
}


int main()
{
	int a;
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&a);
	printf("Sum is: %d",sum(a));

	return 0;

}

