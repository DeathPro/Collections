#include <stdio.h>

struct musteri
{
	int hesapNo;
	char ad[29];
	char soyad[25];
	double bakiye;
};



int main()
{
	int i;
	struct musteri hesapBilgi = { 0,"","",0.0 };
	FILE *ptr;
	ptr = fopen("Dosya Islemii 3.txt", "w");
	if (ptr == NULL)
		printf("Dosya Bulunamadi.\n");
	else
	{
		printf("Hesap No Gir (1 - 100 Arasi Deger)\n"
			"Veri Girisini Bitirmek Icin 0 gir");
		scanf("%d", &hesapBilgi.hesapNo);
		while (hesapBilgi.hesapNo!=0)
		{
			printf("Soyad Ad ve Bakiye Gir \n?");
			scanf("%s %s %lf", hesapBilgi.soyad, hesapBilgi.ad,
				&hesapBilgi.bakiye);
			fseek(ptr, (hesapBilgi.hesapNo - 1) * sizeof(struct musteri), SEEK_SET);
			fwrite(&hesapBilgi, sizeof(struct musteri), 1, ptr);
			printf("Hesap No Gir ? \n");
			scanf("%d", &hesapBilgi.hesapNo);
		}
		fclose(ptr);
	}
	
	
	return 0;
}
