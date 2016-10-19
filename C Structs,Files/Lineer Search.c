#include <stdio.h>


int lineerSearch(int sayi[30], int n)
{
	int i, find;
	printf("Bulmak Istediginiz Sayiyi Giriniz: ");
	scanf("%d", &find);
	for (i = 0; i < n; i++)
	{
		if (sayi[i] == find)
		{
			return i;	
		}
	}
	printf("asdasdasd\n"); // int fonksiyonlarinda 1 kere return e gelindi mi fonksiyondan cikiliyor ve return degeri donduruluyor...
						   // burda bunu deneyerek baktým...
	return -1;
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
		printf("%d. Elemani Giriniz: ", i + 1);
		scanf("%d", &sayi[i]);
	}
	printf("Bulmak Istediginiz Sayinin Indexi(-1 Ise Yok Demektir): %d",lineerSearch(sayi, n));

	getch();
	return 0;
}