#include <stdio.h>

void selectionSort(int dizi[30], int n)
{
	int i, k;
	int min, index;
	for (i = 0; i < n - 1; i++)
	{
		min = dizi[n - 1];
		index = n - 1;
		for (k = i; k < n - 1; k++)
		{
			if (dizi[k] < min)
			{
				min = dizi[k];
				index = k;
			}
		}
		dizi[index] = dizi[i];
		dizi[i] = min;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", dizi[i]);
	}
}

int main()
{
	int sayi[30];
	int n;
	int i;
	printf("Kac Sayi Gireceksin: ");
	scanf("%d", &n);
	printf("Sayilarini Gir\n");
	for (i = 0; i < n; i++)
	{
		printf("%d. Elamani Giriniz: ", i + 1);
		scanf("%d", &sayi[i]);
	}
	selectionSort(sayi, n);

	getch();
	return 0;
}