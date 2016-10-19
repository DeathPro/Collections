#include <stdio.h>

int main(void)

{
	int Not;
	
	printf("Not girin:");
	scanf("%d",&Not);
	
	if(Not>=90){
		printf("A");
		}
		else {if(Not>=80)
		printf("B");
		
		else if(Not>=70)
		printf("C");
		
		else if(Not>=60)
		printf("D");
		
		else printf("F");
		
		}
	
}
