#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

void fillarray(int *);
void wrtarray(int *);

int main() {
	srand(time(NULL)); //time kucuk yaziliyo.

	int *p;

	p = calloc(N, sizeof(int));

	fillarray(p);

	wrtarray(p);

	free(p); //aldigimiz yeri bosaltiyoruz...

	return 0;

}

void fillarray(int *a)
{
	int i;
	for(i=0;i<N;i++){
		*(a+i)=rand()%100;
	}

}
void wrtarray(int *a)
{
	int i;
	printf("[");
	for(i=0;i<N;i++)
	{
		printf("%d%s",a[i],(i==N-1)?"]":",");
	}
}
