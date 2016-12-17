

#include <stdio.h>

int faktoriyel(int n)
{
	if (n==1)
		return 1;
	else
		return (n * faktoriyel(n-1));
}


int main()
{
	int sayi;

	printf("Faktoriyeli Alinacak Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	printf("%d! = %d",sayi,faktoriyel(sayi));

	return 0;
}
