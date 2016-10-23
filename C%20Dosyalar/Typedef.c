#include <stdio.h>

typedef union intorfloat {//ayni ram adresine yazar.//union'a bakkk
	int i;
	double f;
	float c;
	char d;
} number;

int main() {
	number n;
	n.i = 10;
	printf("i = %d\n", n.i);
	n.f = 20.0;
	printf("f = %lf\n", n.f);//20 8 bytelik yer kapliyodu.i nin degeri kayboldu
	printf("i = %d\n", n.i);
}
