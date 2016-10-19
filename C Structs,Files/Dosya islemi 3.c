#include <stdio.h>


void hpoh()
{
	int hesapNo;
	char ad[30];
	double bakiye;
	FILE *ptr;
	ptr = fopen("Dosya Islemii 1.txt", "r");
	if (ptr==NULL)
	{
		printf("Dosya Bulunamadi.\n");
	}
	else
	{
		while (!feof(ptr))
		{
			fscanf(ptr, "%d %s %lf", &hesapNo, ad, &bakiye);
			if (bakiye==0)
			{
				printf("%d %s %lf\n", hesapNo, ad, bakiye);
			}
		}
	}
	rewind(ptr);
	
}
void boh()
{
	int hesapNo;
	char ad[30];
	double bakiye;
	FILE *ptr;
	ptr = fopen("Dosya Islemii 1.txt", "r");
	if (ptr == NULL)
	{
		printf("Dosya Bulunamadi.\n");
	}
	else
	{
		while (!feof(ptr))
		{
			fscanf(ptr, "%d %s %lf", &hesapNo, ad, &bakiye);
			if (bakiye < 0)
			{
				printf("%d %s %lf\n", hesapNo, ad, bakiye);
			}
		}
	}
	rewind(ptr);
	
}
void hpolanh()
{
	int hesapNo;
	char ad[30];
	double bakiye;
	FILE *ptr;
	ptr = fopen("Dosya Islemii 1.txt", "r");
	if (ptr == NULL)
	{
		printf("Dosya Bulunamadi.\n");
	}
	else
	{
		while (!feof(ptr))
		{
			fscanf(ptr, "%d %s %lf", &hesapNo, ad, &bakiye);
			if (bakiye > 0)
			{
				printf("%d %s %lf\n", hesapNo, ad, bakiye);
			}
		}
	}
	rewind(ptr);
	
}

int main()
{
	
	int secim;
	while (1)
	{
		printf("Secim Yapiniz\n"
			"1 - Hesapta Para Olmayan Hesaplar\n"
			"2 - Borclu Olan Hesaplar\n"
			"3 - Hesapta Para Olan Hesaplar\n"
			"4 - Cikis\n");
		scanf("%d", &secim);
		switch (secim)
		{
		case 1: hpoh(); break;
		case 2: boh(); break;
		case 3: hpolanh(); break;
		case 4: exit(0);
		}
	}

	
	
	getch();
	return 0;
}