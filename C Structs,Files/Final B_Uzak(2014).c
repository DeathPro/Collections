#include <stdio.h>

int main(void)
{
	int a[8] = { 16,20,4,8,13,33,41,66 };
	int *ptr, i;
	ptr = a;
	for (i = 0; i < 4; i++)
	{
		printf("%d \t %p\n", *ptr, ptr);
		ptr += 2;
	}
	printf("%d\n", *(ptr - 4));
	ptr = a + 2;
	for (i = 0; i < 6; i++)
		printf("%d \t %p\n", *(ptr + i), ptr);
	printf("%d", *ptr);

	getch();
	return 0;
}