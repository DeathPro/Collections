#include<stdio.h>
#include<string.h>
int main( void )
{
	char kaynak[40]="Merhaba D�nya";
	char kopya[30] = "";
	strcpy( kopya, kaynak );
	printf( "%s\n", kopya );

	return 0;
}
