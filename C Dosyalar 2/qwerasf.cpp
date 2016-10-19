#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1,sayi,n=0;
    printf("Sayiyi girin : ");
    scanf("%d",&sayi);
    
    while(i<sayi)
    {
		i++;
       if(sayi%i==0)
       {
           n++;
       }    
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
