#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
	int i,a,*ptr;
	
	int dizi[]={13, 24, 48, -4, 77, 81, 6, 12, 5, 142, 43, 55};
	
	ptr=&dizi[3];
	
	for(i=4;i>1;i--){
		a=*(ptr+i);
		printf("%d \n",a);
		ptr=&ptr[i-1];
		if(i>2) continue;
		printf("%p\n",ptr);
	}
	ptr=dizi;
	a=(ptr+2) [1];
	printf("%d",a);
}
