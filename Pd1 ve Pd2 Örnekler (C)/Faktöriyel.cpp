#include <stdio.h>
#include <conio.h>
int main(void)
{
	int i,sayi,carpim;
	
	carpim=1;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
	
	carpim=carpim*i;
	
	}
	printf("%d! = %d",sayi,carpim);
	getch();
	return 0;
	
}
