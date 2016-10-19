#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char c,cumle[30];
	int i=0;
	
	puts("Bir Cumle Giriniz:");
	
	while((c=getchar())!='.' && i!=29){
		cumle[i++]=c;
	}
	
	cumle[i]='\0';
	
	puts("Girilen Cumle:");
	puts(cumle);
	
	getch();
	return 0;
}
