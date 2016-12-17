#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int uzunluk (char cumle2[40]){
	int i=0;
		
	while(cumle2[i]!='\0'){
		i++;
	}
	return i;
	
}


int main()
{
	char cumle[40];
	
	
	printf("Bir string girin:");
	gets(cumle);
	
	printf("Uzunlugu: %d",uzunluk(cumle));

}
