#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{	//sahis_bilgileri, yapimizin etiketidir.
	struct sahis_bilgileri
	{
		char isim[40];
		int boy;
	};
	//Yapidan iki adet degisken tanimliyoruz.
	typedef struct sahis_bilgileri sb;
	sb kisi_1;
	sb kisi_2;
	//Birinci sahsin bilgilerini kaydediyoruz.
	strcpy(kisi_1.isim, "AHMET");
	kisi_1.boy = 170;
	//ikinci sahsin bilgilerini kaydediyoruz.
	strcpy(kisi_2.isim, "MEHMET");
	kisi_2.boy = 175;
	return 0;

}