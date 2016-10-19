#include <stdio.h>

int main()
{
	int hesapNo;
	char ad[30];
	double bakiye;
	FILE *ptr;
	ptr = fopen("Dosya Islemii 1.txt", "r+");

	if (ptr == NULL)
		printf("Dosya Bulunamadi.\n");
	else
	{
		printf("Hesap No,Isim ve Bakiye Girin \n");
		printf("(Veri Girdisini Bitirmek Icin EOF Gir.)\n");
		printf("? ");
		scanf("%d %s %lf", &hesapNo, ad, &bakiye);

		while (!feof(stdin))
		{
			fprintf(ptr, "%d %s %.2lf\n", hesapNo, ad, bakiye);
			printf("? ");
			scanf("%d %s %lf", &hesapNo, ad, &bakiye);
		}
		fclose(ptr);
	}
	
	return 0;

}
