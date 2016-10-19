#include <stdio.h>
#include <conio.h>
int main(void)

{
	int N,A=1,B=1,i=3,Toplam;
	
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&N);
	printf("%d\n",A);
	printf("%d\n",B);
	
	
	while(i<=N)
	{
		Toplam=A+B;
		printf("%d\n",Toplam);
		A=B;
		B=Toplam;
		i++;
	}
	getch();
	
	return 0;
}
