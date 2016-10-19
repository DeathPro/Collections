#include <stdio.h>

int main()
{
	FILE *ptr;
	/*char k;
	ptr = fopen("Deeneme.txt", "r");
	if (ptr==NULL)
	{
		printf("Dosya Bulunamadi.");
	}
	else
	{
		k = fgetc(ptr);
		printf("%c", k);
	}*/
	/*ptr = fopen("Deeneme.txt", "r");
	char k1[10], k2[10];
	int sayi;

	if (ptr!=NULL)
	{
		fscanf(ptr, "%s", k1);
		fscanf(ptr, "%s", k2);
		fscanf(ptr, "%d", &sayi);
		printf("%s %s %d", k1, k2, sayi);
	}
	else
	{
		printf("Dosya Bulunamadi.");
	}*/
	/*ptr = fopen("Deeneme.txt", "r");
	char kelime[50][20];
	int i = 0;
	if (ptr != NULL)
	{
		while (!feof(ptr))
		{
			fscanf(ptr, "%s", &kelime[i]);
			printf("%s ", kelime[i]);
			i++;
		}
	}
	else
	{
		printf("Dosya Bulunamadi.");
	}*/
	/*ptr = fopen("Deeneme.txt", "r");
	char numaralar[10][10], isimler[10][20];
	int notlar[10], i = 0;
	if (ptr!=NULL)
	{
		while (!feof(ptr))
		{
			fscanf(ptr, "%s %s %d", &numaralar[i], &isimler[i], &notlar[i]);
			printf("%s\t%s\t%d\n", numaralar[i], isimler[i], notlar[i]);
			i++;
		}
	}
	else
	{
		printf("Dosya Bulunamadi.");
	}*/
	ptr = fopen("Deeneme.txt", "r");
	char karakter;
	if (ptr!=NULL)
	{
		karakter = fgetc(ptr);
		while (karakter!=EOF)
		{
			printf("%c", karakter);
			karakter = fgetc(ptr);
		}
	}
	else
	{
		printf("Dosya Bulunamadi.");
	}


	getch();
	fclose(ptr);
}