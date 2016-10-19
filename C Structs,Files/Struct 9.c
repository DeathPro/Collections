#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//kisi adinda bir yapi olusturup baslangýc degerleri
	//'Ali' ve '167' olacak sekilde atanir.
	struct ogrenci
	{
		char isim[40];
		int boy;
	}kisi = {"Ali",167};

	printf("Isim: %s \t Boy: %d", kisi.isim, kisi.boy);
	getch();
	return 0;
}