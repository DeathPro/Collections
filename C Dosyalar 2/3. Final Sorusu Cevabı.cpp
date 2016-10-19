#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int en_kucuk_deger(int dizi[100]){
	int i,min;
	
	min=dizi[0];
	
	for(i=1;dizi[i]!='\0';i++){
		if(dizi[i]%2==1 && min>dizi[i])
		min=dizi[i];
	}
	return min;
}

