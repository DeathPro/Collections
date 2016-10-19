#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char cumle[40];
	int i,a=0,b=0;
	
	printf("Bir Cumle Giriniz:");
	gets(cumle);
	
	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i]=='a' || cumle[i]=='e' || cumle[i]=='i' || cumle[i]=='o' || cumle[i]=='u' )
		a++;
		else if(cumle[i]!=' ')
		b++;
	}
	printf("Unlulerin Sayisi: %d\n",a);
	printf("Unsuzlerin Sayisi: %d\n",b);
	printf("String Uzunlugu:%d",i);
	
	return 0;
	
}
