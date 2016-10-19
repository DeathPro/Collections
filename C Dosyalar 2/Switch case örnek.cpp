#include <stdio.h>

int main(void)
{
	int Not,aCount=0,bCount=0,cCount=0,dCount=0,fCount=0;
	
	printf("Bir Not Giriniz: \n");
	printf("Girisi Sonlandirmak icin EOF Karakteri Girin \n");
	
	while((Not=getchar())!=EOF){// EOF yi klavyeden ctrl+z yaparak giriyorsun //
		switch (Not){
			case 'A':
			case 'a':
				++aCount;
				break;
			
			case 'B':
			case 'b':
				++bCount;
				break;
			
			case 'C':
			case 'c':
				++cCount;
				break;
				
			case 'D':
			case 'd':
				++dCount;
				break;
				
			case 'F':
			case 'f':
				++fCount;
				break;
				
				case '\n':
				case '\t':
				case ' ':
					break;
					
					default:
						printf("Yanlýþ Not Girdiniz\n");
						printf("Yeni Bir Not Giriniz\n");
						break;
		}
	}
	printf("\nHer Bir Karakterin Toplami:\n");
	printf("A: %d\n",aCount);
	printf("B: %d\n",bCount);
	printf("C: %d\n",cCount);
	printf("D: %d\n",dCount);
	printf("F: %d\n",fCount);
	
	return 0;
}
