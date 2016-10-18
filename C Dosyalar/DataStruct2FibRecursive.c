#include <stdio.h>

int fib(int n)
{
	if(n<=1)
		return 1;
	else
		return (fib(n-1) + fib(n-2));
}

int main()
{
	int s;
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&s);
	printf("Sum is: %d",fib(s));

	return 0;
	// Stack LIFO=Last In First Out
}
