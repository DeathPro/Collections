#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fib[20],i;
	
	fib[0]=1;
	fib[1]=1;
	
	for(i=2;i<20;i++){
		fib[i]=fib[i-1]+fib[i-2];
		printf("%d. fibonacci sayisi= %d\n",i+1,fib[i]);
	}
}
