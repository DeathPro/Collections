#include <stdio.h>
#include <stdlib.h>

int isci(int gunsayisi){
static int i=1;
static int ucret = 3;
if(gunsayisi == i)
	return ucret;
else {
	i++;
	ucret *= 2;
	return isci(gunsayisi);
	}
}

int main(int argc, char **argv){
int a;

	printf("Iscinin Calistigi Gun Sayisi : ");
	scanf("%d",&a);

	printf("Iscinin Ucreti : %d",isci(a));


return 0;
}
