#include <stdio.h>

int OBEB(int num1, int num2){
	int kalan;
	kalan = num1 % num2 ;
	if(kalan == 0)
		return num2;

	return OBEB(num2,kalan);
}

int main(int argc, char **argv){
	int num1 = 0, num2 = 0;
	printf("Birinci Numarayi Giriniz : ");
	scanf("%d",&num1);
	printf("Ikinci Numarayi Giriniz : ");
	scanf("%d",&num2);

	printf("OBEB : %d",OBEB(num1,num2));

	return 0;
}
