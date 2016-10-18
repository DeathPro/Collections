#include <stdio.h>

#define N 100

int main() {
	int a[N];
	int *p;

	p = calloc(N, sizeof(int)); //contiguous allocation
								// ayni isi yapiyolar hafizadan yer ayiriyolar.
								//calloc actigi yerlere sifir koyuyor.
								//malloc ne varsa koyuyor.
	p = malloc(N * sizeof(int));// memory allocation

	free(p); //aldigimiz yeri bosaltiyoruz
	return 0;
}
