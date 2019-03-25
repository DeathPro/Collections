#include <stdio.h>
#include <string.h>

int main() {
	char a[25];
	int b=1;
	printf("Bir Cumle Giriniz : ");
	gets(a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(i==0)
			printf("%d. kelimenin 1. harfi : %c\n",b,a[i]);
		else if(a[i]==' '){
			b++;
			printf("%d. kelimenin 1. harfi : %c\n",b,a[i+1]);
	}
}
}
