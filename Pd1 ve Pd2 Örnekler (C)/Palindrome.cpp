#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindrome(char ters[100]){
	int i,j,a;
	
	for(i=0;ters[i]!='\0';i++){
	}
	for(j=0;j<i/2;j++){
		if(ters[j]==ters[i-j-1]){
			a=1;
		}
		else{
		a=0;
	}
	}
	return a;
	
}

int main()
{
	char cumle[100];
	
	printf("Bir cumle giriniz:");
	gets(cumle);
	
	printf("Palindrome mu degil mi : %d",palindrome(cumle));
	
	return 0;
}
