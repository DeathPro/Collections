#include <stdio.h>

int main(void)

{
	int N,A=1,B=1,i=3,Toplam=0;
	
	printf("Bir Sayi Giriniz: ");
	scanf("%d",N);
	
	for(i<=N;i++;)
	{
		Toplam=A+B;
		A=B;
		B=Toplam;
		
	}
}
