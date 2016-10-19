#include <stdio.h>

struct musteri
{
	int hesapNo;
	char soyad[25];
	char ad[20];
	double bakiye;
};

int secimGir(void);
void textDosya(FILE *);
void kayitGuncelle(FILE *);
void yeniKayit(FILE *);
void kayitSil(FILE *);
void listele(FILE *);

int main(void)
{
	FILE *ptr;
	int secim;
	ptr = fopen("Dosya Islemii 4.txt", "r+");
	if (ptr == NULL)
		printf("Dosya Acilamadi.\n");
	else
	{
		while ((secim = secimGir ()) != 6)
		{
			switch (secim)
			{
			case 1:textDosya(ptr); break;
			case 2:kayitGuncelle(ptr); break;
			case 3:yeniKayit(ptr); break;
			case 4:kayitSil(ptr); break;
			case 5:listele(ptr); break;
			}
		}
		fclose(ptr);
	}
	getchar();
	return 0;
}

int secimGir()
{
	int menuSecim;
	printf("\n Secimini Yap\n"
		"1-Dosya Islemii 4.txt dosyasinin icerigini\nformatli olarak \"hesaplar.txt\"dosyasina yaz\n"
		"2-Hesap Guncelle\n"
		"3-Yeni Hesap Ekle\n"
		"4-Hesap Sil\n"
		"5-Dosya Islemii 4.txt dosyasinin icerigini listele\n"
		"6-Cikis\n ?");
	scanf("%d", &menuSecim);
	return menuSecim;
}
void textDosya(FILE *okuptr)
{
	FILE *yazptr;
	struct musteri hesapBilgi = { 0,"","",0.0 };
	yazptr = fopen("hesaplar.txt", "w");
	if (yazptr == NULL)
		printf("Dosya Acilmadi.\n");
	else
	{
		rewind(okuptr);
		fprintf(yazptr, "%-10s%-16s%-11s%10s\n", "HesapNo", "Soyad", "Ad", "Bakiye");
		while (!feof(okuptr))
		{
			fread(&hesapBilgi, sizeof(struct musteri), 1, okuptr);
			if (hesapBilgi.hesapNo != 0)
				fprintf(yazptr, "%-10d%-16s%-11s%10.2lf\n", hesapBilgi.hesapNo, hesapBilgi.soyad, hesapBilgi.ad, hesapBilgi.bakiye);
		}
		fclose(yazptr);
	}

}
void kayitGuncelle(FILE *fptr)
{
	int hesapID;
	double islemMiktari;
	struct musteri hesapBilgi = { 0,"","",0.0 };
	printf("Guncellenecek Hesap No Girin[1 - 100]: ");
	scanf("%d", &hesapID);
	fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
	fread(&hesapBilgi, sizeof(struct musteri), 1, fptr);
	if (hesapBilgi.hesapNo == 0)
		printf("%d Nolu Hesap Icin Bilgi Girilmemis\n", hesapID);
	else
	{
		printf("%-10d%-16s%-11s%10.2lf\n\n", hesapBilgi.hesapNo, hesapBilgi.soyad, hesapBilgi.ad, hesapBilgi.bakiye);
		printf("Hesaba Yatacak (+) veya Hesaptan Cekilecek (-) Tutari Girin: ");
		scanf("%lf", &islemMiktari);
		hesapBilgi.bakiye += islemMiktari;
		printf("%-10d%-16s%-11s%10.2lf\n\n", hesapBilgi.hesapNo, hesapBilgi.soyad, hesapBilgi.ad, hesapBilgi.bakiye);
		fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
		fread(&hesapBilgi, sizeof(struct musteri), 1, fptr);
	}
}

void kayitSil(FILE *fptr)
{
	struct musteri hesapBilgi, bosHesap = { 0,"","",0.0 };
	int hesapID;
	printf("Silinecek Hesap No Gir [1 - 100]: ");
	scanf("%d", &hesapID);
	fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
	fread(&hesapBilgi, sizeof(struct musteri), 1, fptr);
	if (hesapBilgi.hesapNo == 0)
		printf("Silinecek %d Nolu Hesap Yok", hesapID);
	else
	{
		fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
		fwrite(&bosHesap, sizeof(struct musteri), 1, fptr);
	}
}
void yeniKayit(FILE *fptr)
{
	int hesapID;
	struct musteri hesapBilgi = { 0,"","",0.0 };
	printf("Yeni Hesap No Giriniz [1 - 100]: ");
	scanf("%d", &hesapID);
	fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
	fread(&hesapBilgi, sizeof(struct musteri), 1, fptr);
	if (hesapBilgi.hesapNo != 0)
		printf("%d Nolu Hesap Zaten Mevcut\n", hesapID);
	else
	{
		printf("Soyad, Ad ve Bakiye Giriniz: ");
		scanf("%s %s %lf", hesapBilgi.soyad, hesapBilgi.ad, &hesapBilgi.bakiye);
		hesapBilgi.hesapNo = hesapID;
		fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
		fwrite(&hesapBilgi, sizeof(struct musteri), 1, fptr);
	}
}

void listele(FILE *fptr)
{
	rewind(fptr);
	struct musteri hesapBilgi = { 0,"","",0.0 };
	printf("%-10s%-16s%-11s%10s\n", "HesapNo", "Soyad", "Ad", "Bakiye");
	while (!feof(fptr))
	{
		fread(&hesapBilgi, sizeof(struct musteri), 1, fptr);
		if (hesapBilgi.hesapNo != 0)
			printf("%-10d%-16s%-11s%10.2lf\n", hesapBilgi.hesapNo, hesapBilgi.soyad, hesapBilgi.ad, hesapBilgi.bakiye);

	}
	fclose(fptr);
	getchar();
}