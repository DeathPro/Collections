#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Sahis bilgileri adinda bir yapi olusturuyoruz.
	struct sahis_bilgileri
	{
		char isim[40];
		int boy;
	};
	//sahis bilgileri yapisindan kisi adinda
	//bir degisken tanimliyoruz. Tanimlama
	//esnasinda atanacak ilk degerler belirleniyor.
	struct sahis_bilgileri kisi = { "Ali",167 };
	return 0;
}