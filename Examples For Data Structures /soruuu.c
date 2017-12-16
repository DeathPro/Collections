#include<stdio.h>
#include<stdlib.h>

void islem(int e, int f, int *a, int *b) {

	*a = e + f;
	*b = (e) * (f);
}

int main() {
	int a;
	int b;
	int c = 5, d = 10;

	islem(c, d, &a, &b);
	printf("Toplamlari : %d\nCarpimlari : %d\n", a, b);
	return 0;
}
