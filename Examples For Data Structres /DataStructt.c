#include <stdio.h>
int sum(int n)
{
	if(n<=1)//Cikis durumu
		return n;
	else
		return (n+sum(n-1));
}

int main()
{
	int s;
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&s);
	printf("Sum is: %d",sum(s));
	return 0;
	// Stack LIFO=Last In First Out
}
