#include <stdio.h>
#include <conio.h>
void insertionSort(int dizi[20], int n)
{
	int i, k, j, y;
	
	int add;

	for (i = 1; i < n; i++)
	{
		add = dizi[i];
		for (k = i - 1; k>=0 && add<dizi[k]; k--)
		{
				dizi[k + 1] = dizi[k];
				dizi[k] = add;
		}
	}

	printf("\n\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", dizi[i]);
	}
	printf("\n\n");
	printf("Eklemek Istediginiz Sayiyi Giriniz(Eklemek Istemiyorsaniz -1 Girin): ");
	scanf("%d", &j);
	y = n;
	while (j != -1)
	{
		dizi[y] = j;
		y++;
	}
	y--;
	for (i = 1; i < y; i++)
	{
		add = dizi[i];
		for (k = i - 1; k >= 0 && add<dizi[k]; k--)
		{
			dizi[k + 1] = dizi[k];
			dizi[k] = add;
		}
	}


	printf("\n\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", dizi[i]);
	}
	printf("\n\n");
}

int main()
{
	int i, n, dizi[20];
	printf("Kac Eleman Gireceksiniz: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d. Elemani Giriniz: ",i+1);
		scanf("%d", &dizi[i]);
	}
	insertionSort(dizi, n);

	getch();
	return 0;
}
