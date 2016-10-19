#include<stdio.h>
#include<string.h>
int main( void )
{
	int sonuc;
	char ilk_katar[40]="Maymun";
	char ikinci_katar[40]="Maytap";
	sonuc = strcmp( ilk_katar, ikinci_katar );
	printf( "%d\n", sonuc );
	sonuc = strncmp( ilk_katar, ikinci_katar, 3 );
	printf( "%d\n", sonuc );

	return 0;
}
