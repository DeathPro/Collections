#include <stdio.h>

struct ogrenci
{
	char ad[30];
	char soyad[30];
	double parasi;
	double borc;
};
int main()
{
	struct ogrenci hesapBilgi = { "","",0,0 };
	FILE *ptr;
	ptr = fopen("Uygulama.txt", "w+");
	if (ptr == NULL)
		printf("Dosya Bulunamadi.\n");
	else
	{
		printf("Ad, Soyad ve Para Giriniz: ");
		scanf("%s %s %lf", hesapBilgi.ad, hesapBilgi.soyad, &hesapBilgi.parasi);
		hesapBilgi.borc = hesapBilgi.parasi*(0.1);
		while (!feof(stdin)) {
			fprintf(ptr, "%s %s %.2lf %.2lf\n", hesapBilgi.ad, hesapBilgi.soyad, hesapBilgi.parasi,hesapBilgi.borc);
			printf("Ad, Soyad ve Para Giriniz: ");
			scanf("%s %s %lf", hesapBilgi.ad, hesapBilgi.soyad, &hesapBilgi.parasi);
			hesapBilgi.borc = hesapBilgi.parasi*(0.1);
		}
	}
	fclose(ptr);
	getch();
	return 0;
}