#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{


int i,Not,Gecenler;

Gecenler=0;

for(i=1;i<=40;i++){
	
	printf("Bir Not Giriniz:");
	scanf("%d",&Not);
	
	if(Not>=60)
	Gecenler++;
}
printf("Gecenlerin Sayisi: %d",Gecenler);

}
