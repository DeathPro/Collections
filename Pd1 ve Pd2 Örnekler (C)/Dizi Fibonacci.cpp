#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main(void)
{

int a[20],i;

	a[0]=1;
	a[1]=1;

	for(i=2;i<20;i++){
		
		a[i]=a[i-1] + a[i-2];
		printf("%d\n",a[i]);
	}

return 0;
}
