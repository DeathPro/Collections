#include <stdio.h>

void bubbleSort(int dizi[30], int n)
{
	int i, k;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (k = 0; k < n - 1 - i; k++)
		{
			if (dizi[k] > dizi[k + 1])
			{
				temp = dizi[k + 1];
				dizi[k + 1] = dizi[k];
				dizi[k] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", dizi[i]);
	}
	printf("\n");
}

void insertionSort(int dizi[30], int n)
{
	int i, k;
	int add;

	for (i = 1; i < n; i++)
	{
		add = dizi[i];
		for (k = i - 1; k >= 0 && add <= dizi[k]; k--)
		{
			dizi[k + 1] = dizi[k];
		}
		dizi[k + 1] = add;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", dizi[i]);
	}
	printf("\n");
}

void selectionSort(int dizi[30], int n)
{
	int i, k;
	int index, min;

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
	printf("\n");
}

void lineerSearch(int dizi[30], int n)
{
	int find, i;
	printf("Bulmak Istediginiz Eleman: ");
	scanf("%d", &find);
	for (i = 0; i < n; i++)
	{
		if (dizi[i] == find)
			printf("Aradiginiz Sayinin Indexi: %d\n", i);
	}
}

void binarySearch(int dizi[30], int n)
{
	int mid, left, right, find;
	printf("Bulmak Istediginiz Eleman: ");
	scanf("%d", &find);
	left = 0;
	right = n - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (dizi[mid] == find) {
			printf("Aradiginiz Sayinin Indexi: %d\n", mid);
			break;
		}
		else if (find > dizi[mid])
			left = mid + 1;
		else right = mid - 1;
	}
}

int main()
{
	int sayi[30];
	int n, i, secim;
	
	printf("Kac Eleman Giriceksiniz: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d. Elemani Giriniz: ", i + 1 );
		scanf("%d", &sayi[i]);
	}

	while (1)
	{
		printf("Secim Yapiniz.\n1-)Bubble Sort\n2-)Insertion Sort\n3-)Selection Sort\n4-)Lineer Search(Index Dondurur)\n5-)Binary Search(Index Dondurur)\n6-)Cikis\n");
		scanf("%d", &secim);
		switch (secim)
		{
		case 1: bubbleSort(sayi, n); break;
		case 2: insertionSort(sayi, n); break;
		case 3: selectionSort(sayi, n); break;
		case 4: lineerSearch(sayi, n); break;
		case 5: binarySearch(sayi, n); break;
		case 6: exit(0); 
		}
	}
}