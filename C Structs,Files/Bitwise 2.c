#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short int x, gun = 0, ay = 0, y = 0;
	scanf("%d", &x);
	gun = x & 31;
	gun++;
	if (gun>31)
	{
		gun = gun % 31;
		ay++;
	}
	printf("gün : %2d", gun);
	x = x >> 5;
	ay = x & 15;
	ay++;
	if (ay>12)
	{
		ay = ay % 12;
		y++;
	}
	printf("Ay: %2d", ay);
	x = x >> 4;
	printf("yil : %4d", x + 1889 + y);
	getch();

}