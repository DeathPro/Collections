#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	// Dogum tarihi tutmak icin
	// 'dogum_tarihi' adinda bir yapi
	// olusturuyoruz
	struct dogum_tarihi
	{
		int gun, ay, yil;
	};
	// Kisiye ait bilgileri tutmak
	// icin 'sahis_bilgileri' adinda
	// bir yapi kuruluyor.
	struct sahis_bilgileri
	{
		char isim[40];
		int boy;
		// Yapi icinde bir baska yapiyi
		// kullanmak mumkundur. dogum_tarihi
		// yapisindan 'tarih' adinda bir
		// degisken tanimlaniyor.
		struct dogum_tarihi tarih;
	};
	struct sahis_bilgileri *ptr;
	// Dizi elemanlarina ilk deger atamasi yapiyoruz. Dilerseniz
	// klavyeden deger girmeyi tercih edebilirsiniz.
	struct sahis_bilgileri kisi[3]= { "Ali", 170,{ 17, 2, 1976 },
									"Veli", 178,{ 14, 4, 1980 },
									"Cenk", 176,{ 4, 11, 1983 } };
	//Yapi dizisini yazdiriyoruz.
	for (i = 0, ptr = &kisi[0]; ptr <= &kisi[2]; ptr++, i++) {
		printf("Kayit no: %d\n", i + 1);
		printf("Ad: %s\n", ptr->isim);
		printf("Boy: %d\n", ptr->boy);
		printf("Dogum Tarihi: %d/%d/%d\n", ptr->tarih.gun, ptr->tarih.ay, ptr->tarih.yil);

	}
	getch();
	return 0;
}