#include <stdio.h>

int main()
{
	int x = 1;
	while (x != 0)
	{
		printf("%d\n", x);
		x = 0;
		x = x - 5;
		printf("%d\n", x);
	}
	printf("%d", x);
	getch();
	return 0;
}