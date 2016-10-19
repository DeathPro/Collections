#include<stdio.h>
#include<conio.h>

int main()
{
    int i=2,sayi,n=0;
    printf("Sayiyi girin : ");
    scanf("%d",&sayi);
    
    while(i<sayi)
    {
		
       if(sayi%i==0)
       {
           n++;
           printf("\n%d",n);
           
       }    
    		printf("\n%d",n);
       
       i++;
    }     
    
    if(n==0)
    {
        printf("Asal");                    
    }
    else
    {
        printf("Asal degil"); 
    }
    
    getch();
}
