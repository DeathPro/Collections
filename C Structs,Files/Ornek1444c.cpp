#include <stdio.h>
#include <string.h>
struct banka
{
	int hesapNo;
	char ad[20];
	char soyad[20];
	double bakiye;
};

int main()
{
	struct banka hesapBilgi = { 0,"","",0.0 };
	struct banka bosHesap = { 0,"","",0.0 };
	FILE *ptr;
	FILE *yedek;
	yedek = fopen("Ornek1.txt", "w+");
	ptr = fopen("Ornek.txt", "r+");
	char dizi[20];
	int sayac = 0, i=0;
	if (ptr == NULL)
		printf("Dosya Bulunamadi.\n");
	else
	{
		/*printf("Hesap No Giriniz(Durmak Icin 0 Girin): ");
		scanf("%d", &hesapBilgi.hesapNo);
		while (hesapBilgi.hesapNo!=0)
		{
			printf("Ad, Soyad ve Bakiye Giriniz: ");
			scanf("%s %s %lf", hesapBilgi.ad, hesapBilgi.soyad, &hesapBilgi.bakiye);
			fprintf(ptr, "%d %s %s %.2lf\n", hesapBilgi.hesapNo, hesapBilgi.ad, hesapBilgi.soyad, hesapBilgi.bakiye);
			printf("Hesap No Giriniz(Durmak Icin 0 Girin): ");
			scanf("%d", &hesapBilgi.hesapNo);
		}*/
		printf("Bulmak Istediginiz Elemanin Ismi: ");
		scanf("%s", dizi);
		fscanf(ptr, "%d %s %s %lf", &hesapBilgi.hesapNo, hesapBilgi.ad, hesapBilgi.soyad, &hesapBilgi.bakiye);
		while (!feof(ptr))
		{
			
			if (strcmp(hesapBilgi.ad, dizi) == 0)
			{
				/*printf("Bakiyeyi Giriniz: ");
				scanf("%lf", &hesapBilgi.bakiye);
				fprintf(yedek, "%d %s %s %.2lf\n", hesapBilgi.hesapNo, hesapBilgi.ad, hesapBilgi.soyad, hesapBilgi.bakiye);*/
				sayac++;
			}
			else
			{
				fprintf(yedek, "%d %s %s %.2lf\n", hesapBilgi.hesapNo, hesapBilgi.ad, hesapBilgi.soyad, hesapBilgi.bakiye);
			}
			fscanf(ptr, "%d %s %s %lf", &hesapBilgi.hesapNo, hesapBilgi.ad, hesapBilgi.soyad, &hesapBilgi.bakiye);
		}
		fclose(yedek);
		fclose(ptr);
		if (sayac)
		{
			remove("Ornek.txt");
			rename("Ornek1.txt", "Ornek.txt");
		}
		else
		{
			remove("Ornek1.txt");
		}
	}
}