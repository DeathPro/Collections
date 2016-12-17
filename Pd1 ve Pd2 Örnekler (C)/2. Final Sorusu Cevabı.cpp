#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	char cumle[100];
	int i,c=0;
	
	printf("Bir Cumle Girin:");
	gets(cumle);
	
	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i]=='a' && cumle[i+1]=='k')
		c++;
	}
	printf("Bu Kadar ak var: %d",c);
}
