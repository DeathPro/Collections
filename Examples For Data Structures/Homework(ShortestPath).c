#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int a=0; int i=0;
    int b=0; int j=0;
    int **matris;
    srand(time(NULL));
    printf("Kaç Boyutlu Matris İstiyorsunuz (Satır,Sütun) : ");
    scanf("%d %d",&a,&b);

        matris = malloc(a * sizeof(int *));

    for(i = 0 ; i < a ; i++)
        matris[i] = malloc(b * sizeof(int));

    for ( i = 0; i < a; i++) {
        for ( j = 0; j < b; j++) {
            matris[i][j]=rand() % 100;
        }
    }

    for( i = 0; i < a; i++)
    {
        for( j = 0; j < b; j++)
        {
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    free(matris);
    return 0;
}
