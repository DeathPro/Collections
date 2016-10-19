#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int i,vize1,final1;
	char vize[70],final[70];
	
	for(i=0;i<3;i++){
		
		printf("%d. Ogrencinin Vize Notunu Girin:",i);
		scanf("%d",&vize1);
		printf("%d. Ogrencinin Final Notunu Girin:",i);
		scanf("%d",&final1);
		
		vize[i]=vize1;
		final[i]=final1;
	}
	return 0;
}
