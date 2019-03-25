#include <stdio.h>
#define BOYUT 100

int enKucukEleman(int[], int, int, int);

int main() {
	int a[BOYUT], x, eleman = 0;

	for (x = 0; x <= BOYUT - 1; x++) /* veri oluşturma */
		a[x] = 2 * x;

	a[5] = -1;
	eleman = enKucukEleman(a, BOYUT - 1, a[BOYUT - 1], 0);

	printf("En küçük eleman: a[ %d ] = %d\n", eleman, a[eleman]);

	return 0;
}

int enKucukEleman(int dizi[], int boyut, int enKucuk, int mevqi) {
	if (boyut == 1)
		return mevqi;
	else {
		printf("%d\n", enKucuk);
		if (dizi[boyut - 1] <= enKucuk) {
			enKucuk = dizi[boyut - 1];
			mevqi = boyut - 1;
		}
		return enKucukEleman(dizi, boyut - 1, enKucuk, mevqi);
	}
}
