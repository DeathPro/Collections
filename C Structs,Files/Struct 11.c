#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	//Dogum tarihi tutmak icin
	//'dogum_tarihi' adinda bir yapi olusturuyoruz.
	struct dogum_tarihi
	{
		int gun, ay, yil;
	};
	//kisiye ait bilgileri tutmak icin
	//'sahis_bilgileri' adinda bir yapi olusturuyoruz.
	struct sahis_bilgileri
	{
		char isim[40];
		int boy;
		//yapi icinde bir baska yapiyi
		//kullanmak mumkundur.dogum_tarihi yapisinda
		//'tarih' adinda bir degisken tanimlaniyor.
		struct dogum_tarihi tarih;
	};
	//Dizi elemanlarina ilk deger atamasi yapiyoruz.
	//Dilerseniz klavyeden deger girmeyi tercih edebilirsiniz
	struct sahis_bilgileri kisi[3] = {"Ali",170,{17,02,1976},
									"Veli",178,{14,04,1980},
									"Cenk",176,{4,11,1983} };
	//yapi dizisi yazdiriliyor.
	for (i = 0; i < 3; i++) {
		printf("Kayit no: %d\n", i + 1);
		printf("Ad: %s\n", kisi[i].isim);
		printf("Boy: %d\n", kisi[i].boy);
		printf("Dogum Tarihi: %d/%d/%d \n", kisi[i].tarih.gun, kisi[i].tarih.ay, kisi[i].tarih.yil);
		
	}
	getch();
	return 0;
}