/*
 * Swap.c
 *
 *  Created on: Oct 5, 2016
 *      Author: deathpro
 */


#include <stdio.h>

/*void swap(int x,int y) 	//bu fonk. a ve b nin değerini asil olarak degistirmiyor.
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
*/

void swap(int *x,int *y) //Bu fonk. a ve b nin asil degerini degistiriyor Cunku
{						//Adresleri fonksiyona gönderilmis.(Pointer !!!)
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int a=5,b=2;
	//swap(a,b);
	swap(&a,&b);
	printf("a: %d  b: %d",a,b);
	return 0;
}
