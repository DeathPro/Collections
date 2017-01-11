#include <stdio.h>

int main(int argc, char **argv) {

	char a[] = { 'C', 'B', 'A', 'A', 'C', 'C', 'B', 'A', 'B', 'C' };

	char *b[] = { "AA", "AB", "AC", "BA", "BB", "BC", "CA", "CB", "CC" };

	int c = 0;

	for (int i = 0; i < 9; i++) {
		c = 0;
		for (int j = 0; j < 9; j++) {
			if (a[j] == b[i][0] && a[j + 1] == b[i][1])
				c++;
		}
		printf("%c%c = %d\t", b[i][0], b[i][1], c);
	}

	return 0;
}
