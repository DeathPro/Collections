#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int i,vize[70],final[70];
	
	for(i=0;i<70;i++){
		
		printf("%d. Ogrencinin Vize Notunu Girin:",i);
		scanf("%d",&vize[i]);
		printf("%d. Ogrencinin Final Notunu Girin:",i);
		scanf("%d",&final[i]);
		printf("%d",vize[0]);
	}
	
	return 0;
}
