#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	int a,b,i,c,sonuc;
	printf("Ussu alinacak sayi: ");
	scanf("%d",&a);
	printf("Us: ");
	scanf("%d",&b);
	c=0;
	for(i=1;i<=b;i++){
		
		c=c+i;
	}
	
	sonuc=pow(a,c);
	printf("%d",sonuc);
	}
