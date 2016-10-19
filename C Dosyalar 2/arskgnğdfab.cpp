// strchr fonksiyonu printf in i�inde oldu�unda istenilen harf ilk neredeyse ordan itibaren yaz�yor,e�er strrchr varsa istenilen harf en son nerede ge�iyorsa ordan itibaren geri kalani yaziyor.
#include<stdio.h>
#include<string.h>
int main( void )
{
	char adres[] = "Esentepe Caddesi Mecidiyekoy Istanbul";
	char *ilk_nokta, *son_nokta;
	ilk_nokta = strchr( adres, 'e' );
	son_nokta = strrchr( adres, 'e' );
	if( ilk_nokta != NULL ) {
		printf( "Ilk gorundugu konum: %s\n", strchr(adres,'e') );
		printf( "Son gorundugu konum: %s\n", strrchr(adres,'e') );
	}
	else 
		printf( "E�le�me bulunamad�.\n" );
	return 0;
}
