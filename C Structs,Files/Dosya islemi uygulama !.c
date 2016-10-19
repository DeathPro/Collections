#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct musteri
{
	int hesapNo;
	char ad[25];
	char soyadi[25];
	double bakiye;
};
void olustur(FILE *fptr)
{
	rewind(fptr);
	struct musteri hesapBilgi = { 0,"","",0.0 };
	printf("Hesap No Giriniz(Durdurmak Icin 0 Giriniz): ");
	scanf("%d", &hesapBilgi.hesapNo);
	while (hesapBilgi.hesapNo!=0)
	{
		printf("Ad, Soyad ve Bakiye Giriniz: ");
		scanf("%s %s %lf", hesapBilgi.ad, hesapBilgi.soyadi, &hesapBilgi.bakiye);
		fseek(fptr, (hesapBilgi.hesapNo - 1) * sizeof(struct musteri), SEEK_SET);
		fwrite(&hesapBilgi, sizeof(struct musteri), 1, fptr);
		printf("Hesap No Giriniz(Durdurmak Icin 0 Giriniz): ");
		scanf("%d", &hesapBilgi.hesapNo);
	}
	
}
void listele(FILE *fptr)
{
	rewind(fptr);
	struct musteri hesapYazdir ;
	fread(&hesapYazdir, sizeof(struct musteri), 1, fptr);
	while (!feof(fptr))
	{	
		if (hesapYazdir.hesapNo != 0)
			printf("%d %s %s %.2lf\n", hesapYazdir.hesapNo, hesapYazdir.ad, hesapYazdir.soyadi, hesapYazdir.bakiye);
			
			fread(&hesapYazdir, sizeof(struct musteri), 1, fptr);
	}
}
void yeniKayit(FILE *fptr)
{
	struct musteri eklenecekKayit = { 0,"","",0.0 };
	int hesapID;
	printf("Bir Hesap No Giriniz [1 - 100]: ");
	scanf("%d", &hesapID);
	fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
	fread(&eklenecekKayit, sizeof(struct musteri), 1, fptr);
	if (eklenecekKayit.hesapNo != 0)
		printf("%d Nolu Hesap Zaten Mevcut.\n",hesapID);
	else
	{
		printf("Ad, Soyad ve Bakiye Giriniz: ");
		scanf("%s %s %lf", eklenecekKayit.ad, eklenecekKayit.soyadi, &eklenecekKayit.bakiye);
		eklenecekKayit.hesapNo = hesapID;
		fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
		fwrite(&eklenecekKayit, sizeof(struct musteri), 1, fptr);
	}
	rewind(fptr);
}
void kayitSil(FILE *fptr)
{
	rewind(fptr);
	struct musteri hesapBilgi = { 0,"","",0.0 } , bosHesap = { 0,"","",0.0 };
	int hesapID;
	printf("Silinecek Hesap No Giriniz: ");
	scanf("%d", &hesapID);
	fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
	fread(&hesapBilgi, sizeof(struct musteri), 1, fptr);
	if (hesapBilgi.hesapNo == 0)
		printf("Silinecek %d Nolu Hesap Yok.\n", hesapID);
	else
	{
		fseek(fptr, (hesapID - 1) * sizeof(struct musteri), SEEK_SET);
		fwrite(&bosHesap, sizeof(struct musteri), 1, fptr);
	}
}
void bulGuncelle(FILE *fptr)
{
	rewind(fptr);
	struct musteri bulunan = { 0,"","",0.0 };
	char find[20];
	printf("Aradiginiz Isimi Giriniz: ");
	scanf("%s", find);
	
	fread(&bulunan, sizeof(struct musteri), 1, fptr);
	while (!feof(fptr))
	{
		if (strcmp(bulunan.ad, find) == 0)
		{
			printf("Aradiginiz Ismin Bilgileri %d %s %s %lf\n", bulunan.hesapNo,bulunan.ad,bulunan.soyadi,bulunan.bakiye);
			printf("Yeni Bakiyesini Giriniz: ");
			scanf("%lf", &bulunan.bakiye);
			fseek(fptr, (bulunan.hesapNo - 1) * sizeof(struct musteri), SEEK_SET);
			fwrite(&bulunan, sizeof(struct musteri), 1, fptr);
			fseek(fptr, (bulunan.hesapNo) * sizeof(struct musteri), SEEK_SET);
		}
		else
		{
			printf("Aradiginiz Isim Bulunmamaktadir.\n");
		}
			fread(&bulunan, sizeof(struct musteri), 1, fptr);
	}
	rewind(fptr);
}
void textDosya(FILE *okuptr)
{
	rewind(okuptr);
	struct musteri hesapBilgi ;
	FILE *yazptr;
	yazptr = fopen("Dosya Islemi Uygulama 2.txt", "w+");
	fread(&hesapBilgi, sizeof(struct musteri), 1, okuptr);
	while (!feof(okuptr))
	{
		if(hesapBilgi.hesapNo!=0)
			fprintf(yazptr, "%d %s %s %.2lf\n", hesapBilgi.hesapNo, hesapBilgi.ad, hesapBilgi.soyadi, hesapBilgi.bakiye);
	
		fread(&hesapBilgi, sizeof(struct musteri), 1, okuptr);
	}	
}
int main()
{
	int secim;
	FILE *ptr;
	ptr = fopen("Dosya Uygulama 1.txt", "r+");
	if (ptr == NULL)
		printf("Dosya Bulunamadi.\n");
	else
	{
		while (1)
		{
			printf("Secimini Yap\n1-)Dosyaya Veri Yazdir\n2-)Dosyadaki Verileri Oku\n3-)Yeni Kayit Ekle\n4-)Dosyadan Veri Sil\n5-)Aranan Kisiyi Bul ve Guncelle\n6-)Formatli Olarak Yazdir('Dosya Uygulama 2.txt' olarak)\n7-)Cikis\n");
			scanf("%d", &secim);
			switch (secim)
			{
			case 1: olustur(ptr); break;
			case 2:	listele(ptr); break;
			case 3:	yeniKayit(ptr); break;
			case 4:	kayitSil(ptr); break;
			case 5: bulGuncelle(ptr); break;
			case 6: textDosya(ptr); break;
			case 7: exit(0);
			}
		}
	}
	fclose(ptr);
	return 0;
}
