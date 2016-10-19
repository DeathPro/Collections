#include <stdio.h>
#include <stdlib.h>

int main()
{
	int faktoriyel,i=1,sonuc=1;
	
	printf("Bir faktoriyeli alinacak sayi giriniz:");
	scanf("%d",&faktoriyel);
	sonuc=faktoriyel*(faktoriyel-1);
	for(i=2;i<faktoriyel;i++){
		sonuc=sonuc*(faktoriyel-i);
		
	}
	printf("sayi:%d",sonuc);
}
