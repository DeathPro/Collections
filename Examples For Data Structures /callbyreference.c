#include <stdio.h>

void rec(int *b) {

	*b = 10; // icinde tuttugu adresin degerini 1 yaptım call by reference

}
int hesap(int *p, int *q) {
	int a;
	scanf("%d", &a);
	if (a == 1)
		return *p + *q;
	else if (a == 2)
		return (*p) * (*q);
}

int main() {
	int a = 5;
	printf("a = %d\n", a);
	rec(&a);
	printf("a = %d\n", a);
	int b = 6, c = 7;
	printf("Hesap : %d\n", hesap(&b, &c));
	return 0;
}
