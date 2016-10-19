#include <stdio.h>

int main(void)

{
	int a,b,sonuc;
	
	printf("Bir Sayi Giriniz: ");
	
	scanf("%d", &a);
	
	printf("Bir Sayi Giriniz: ");
	
	scanf("%d",&b);
	
	if(a>=b)
	{
		sonuc=a-b;
		printf("sonuc %d",sonuc);
		
	}
	
	else{
		sonuc=b-a;
		printf("sonuc %d",sonuc);
		
	}
	
	return 0;
}
