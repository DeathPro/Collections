#include <stdio.h>

void selectionSort(int sayi[30], int n)
{
	int i, k;
	int min, index;

	for (i = 0; i < n - 1; i++)
	{
		min = sayi[n - 1];
		index = n - 1;
		for (k = i; k < n - 1; k++)
		{
			if (sayi[k] < min)
			{
				min = sayi[k];
				index = k;
			}
		}
		sayi[index] = sayi[i];
		sayi[i] = min;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\t", sayi[i]);
	}
}

int main()
{
	int sayi[30], n;
	printf("Kac Eleman Gireceksiniz: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d. Elemani Giriniz: ", i + 1);
		scanf("%d", &sayi[i]);
	}
	selectionSort(sayi, n);
	getchar();
	return 0;
}