#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main()
{
	char cumle[100];
	int i;
	
	printf("Bir Cumle Giriniz:");
	gets(cumle);
	
	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i]>64 && cumle[i]<91){
		cumle[i]=cumle[i] + 32;
		printf("%c",cumle[i]);
	}
		else{
		cumle[i]=cumle[i] - 32;
		printf("%c",cumle[i]);
	}
	}
	
}
