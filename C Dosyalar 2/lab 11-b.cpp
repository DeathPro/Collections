#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

void maximum(float max[8]){
	
int i;
float maxi;
	maxi=max[0];
	for(i=1;i<8;i++){
		if(maxi<max[i])
		maxi=max[i];
	}
	printf("Dizinin Maximum Degeri: %.3f\n",maxi);
}

void minimum(float min[8]){
	int i;
	float mini;
	mini=min[0];
	for(i=1;i<8;i++){
		if(mini>min[i])
		mini=min[i];
	
	}
	printf("Dizinin Minimum Degeri: %.3f\n",mini);
}

void average(float ave[8]){
	
	int i;
	float toplam=0,ort;
	for(i=0;i<8;i++){
		
	toplam=toplam + ave[i];	
	}
		ort=(float)toplam/(float)i;
		printf("Dizinin Ortalama Degeri: %.3f\n",ort);
}

int main()
{
	float numbers[8]={12.36,4.715,6.41,13,.414,1.732,2.236,2.645};
	
	maximum(numbers);
	minimum(numbers);
	average(numbers);
	
}
