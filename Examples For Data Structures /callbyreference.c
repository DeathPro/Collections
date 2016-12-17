#include <stdio.h>

void rec(int *b) {

	*b=10; // icinde tuttugu adresin degerini 1 yaptım call by reference

}

int main() {
	int a = 5;
	printf("a = %d\n", a);
	rec(&a);
	printf("a = %d", a);
	return 0;
}
