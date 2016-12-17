#include <stdio.h>

struct ogrenci
{
	int no;
	char ad[20];
	char soyad[20];
};


int main()
{


	struct ogrenci bilgi = {0,"",""};

	FILE *dosya;
	dosya = fopen("caner1.txt", "w");
	if (dosya == NULL)
	{
		printf("Dosya acýlamadý\n");
	}
	else
	{
		printf("ad soyad no giriniz.\n");
		scanf("%s %s %d", bilgi.ad, bilgi.soyad, &bilgi.no);
		printf("%s %s %d\n", bilgi.ad, bilgi.soyad, bilgi.no);
		while (!(feof(stdin)))
		{
			fprintf(dosya, "%s %s %d\n", bilgi.ad, bilgi.soyad, bilgi.no);
		
			printf("%s %s %d\n", bilgi.ad, bilgi.soyad, bilgi.no);
			printf("ad soyad no giriniz.\n");
			scanf("%s %s %d", bilgi.ad, bilgi.soyad, &bilgi.no);
		}
	}
	fclose(dosya);

	return 0;
}
