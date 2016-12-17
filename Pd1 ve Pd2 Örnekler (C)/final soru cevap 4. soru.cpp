#include <stdio.h>
#include <math.h>
#include <time.h>

int combine(int a, int b)
{
    int times = 1;
    if( b != 0 )
    {
        times = (int)pow(10.0, (double)((int)log10((double)b)) + 1.0);
    }
    return a * times + b ;
}

int TersCevir(int *p_a)
{
    int x=0,birlestirilmis = 0;
    printf("Ters Cevrilmis Hali..:");
    while(*p_a>0)
    {
        x=*p_a%10;
        *p_a=*p_a/10;
        birlestirilmis = combine(birlestirilmis,x);
    }
    return birlestirilmis;
}

int main(void)
{
  
    int a,sayi,basamak=1,*p_a,b;
    char tekrar;
    p_a=&a;
    printf("Lutfen sayi giriniz..:");
    scanf("%d",&a);
    b=a;
    
    while(b>=10)
    {
        b=b/10;
        basamak++;
    }
    if(basamak>5 || basamak<5)
				{
                    printf("Sayiniz..:%d",*p_a);
                    
                }
    else
    {
        printf("%d",TersCevir(&a));
    }
    
    return 0;

    
}



