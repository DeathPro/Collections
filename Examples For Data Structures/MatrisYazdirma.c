#include<stdio.h>

int matris[10][10];

void printMatris(int matris[][10], int str, int stn);

int main(){
    int str, stn ,i ,j;
    printf("matris için sınırları giriniz: ");		scanf("%d %d",&str, &stn);
    printf("matris'i girin: ");
    for (int i = 0; i < str; ++i)			//matris scanf ile alınıyor.
    {
        for (int j = 0; j < stn; ++j)
        {
            scanf("%d",&matris[i][j]);
        }
    }
    printMatris(matris ,str ,stn);
    return 0;
}

void printMatris(int matris[][10], int str, int stn){
    for (int i = 0; i < str; ++i)
    {
        for (int j = 0; j < stn; ++j)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
}
