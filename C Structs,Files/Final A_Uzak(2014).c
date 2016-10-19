#include <stdio.h>

int main(void)
{
	int a[5] = { 16,20,4,8,13 };
	int *ptr, i;
	ptr = a;
	for (i = 0; i < 5; i++)
	{
		printf("%d \t %p\n", *ptr, ptr);
		ptr++;
	}
	printf("%d\n", *(ptr - 2));
	ptr = a + 3;
	for (i = 0; i < 2; i++)
		printf("%d \t %p\n", *(ptr + i), ptr);
	printf("%d", *ptr);

	getch();
	return 0;
}