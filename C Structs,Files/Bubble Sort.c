#include <stdio.h>

void bubbleSort (int sayi1[30], int n)
{
	int i, k;
	int temp;
	for ( i = 0; i < n; i++)
	{
		for ( k = 0; k < n - 1 - i; k++)
		{
			if (sayi1[k] > sayi1[k+1])
			{
				temp = sayi1[k];
				sayi1[k] = sayi1[k + 1];
				sayi1[k + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t",sayi1[i]);
	}
}

int main()
{
	int sayi[30];
	int n;
	int i;
	printf("Kac Sayi Gireceksin: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d. Elemani Giriniz: ",i+1);
		scanf("%d", &sayi[i]);
	}
	bubbleSort(sayi, n);
	
	getch();
	return 0;
}