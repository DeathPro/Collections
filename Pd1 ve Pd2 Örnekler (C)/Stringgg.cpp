#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main( void )
{
	char cumle[40];
	printf( "Cümle giriniz> ");
	gets( cumle );
	printf( "Girdiðiniz cümle:\n" );
	puts( cumle );
	return 0;
}
