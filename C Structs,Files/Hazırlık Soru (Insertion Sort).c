#include <stdio.h>


int main()
{
	int i, n, dizi[20];
	int j, h=1;
	int s;
	int k;
	int add;
	printf("Kac Eleman Gireceksiniz: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d. Elemani Giriniz: ",i+1);
		scanf("%d", &dizi[i]);
	}
    
	for (i = 1; i < n; i++)
	{
		add = dizi[i];
		for (k = i - 1; k >= 0 && add<dizi[k]; k--)
		{
			dizi[k + 1] = dizi[k];
			dizi[k] = add;
		}
	}
	printf("Kac Sayi Eklemek Istiyorsunuz: ");
	scanf("%d", &j);
	while (h <= j)
	{
		printf("Eklemek Istediginiz Sayiyi Giriniz: ");
		scanf("%d", &s);
		dizi[n] = s;
		n++;
		h++;
	}
	
	for (i = 1; i < n; i++)
	{
		add = dizi[i];
		for (k = i - 1; k >= 0 && add < dizi[k]; k--)
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

	getch();
	return 0;
}