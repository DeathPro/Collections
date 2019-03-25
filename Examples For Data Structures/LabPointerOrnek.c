#include <stdio.h>

int main() {
	//ilk adres 0018FB80
	double *n, **k, myArray[] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
	n = &myArray[1];
	k = &n;
	printf("%p\n", *k);
	printf("%.1f\n", *(*(k) + 2));
	n = myArray;
	printf("%.1f\n", *(n + 1));
	*(n + 3) += 7.26;
	n += 2;
	printf("%.1f\n", *(n + 1));
	n -= 2;
	printf("%p", n);
	return 0;
}
