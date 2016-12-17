#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int sesliharf=0,ince=0,kalin=0,i;
	char kelime[40];
	
	printf("Bir Kelime Giriniz:");
	gets(kelime);
	
	for(i=0;kelime[i]!='\0';i++){
		if(kelime[i]=='a' || kelime[i]=='o' || kelime[i]=='u')
		kalin++;
		if(kelime[i]=='e' || kelime[i]=='i')
		ince++;
		if(kelime[i]=='a' || kelime[i]=='o' || kelime[i]=='u'|| kelime[i]=='e' || kelime[i]=='i')
		sesliharf++;
	}
	if(sesliharf==kalin || sesliharf==ince)
	printf("Buyuk Unlu Uyumuna Uyar.");
	else
	printf("Buyuk Unlu Uyumuna Uymaz.");
}
