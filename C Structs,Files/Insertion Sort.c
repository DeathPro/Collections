#include <stdio.h>

void insertionSort(int dizi[30], int n)
{
	int i, k, add;
	for (i = 1; i < n; i++)
	{
		add = dizi[i];
		for (k = i-1; k >=0 && add<=dizi[k]; k--)
		{
			dizi[k + 1] = dizi[k]; //back slide
		}
		dizi[k + 1] = add;
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
	
	for (i = 0; i < n; i++)
	{
		printf("%d. Elemani Giriniz: ",i+1);
		scanf("%d", &sayi[i]);
	}
	insertionSort(sayi, n);

	getch();
	return 0;
}