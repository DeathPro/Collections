#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct birtday
	{
		int yil;
		int ay;
		int gun;
	} dogum_gunu;

	printf("Dogum Gununuzu ");
	printf("GG-AA-YYYY olarak giriniz.");
	scanf("%d-%d-%d", &dogum_gunu.gun, &dogum_gunu.ay, &dogum_gunu.yil);

	printf("Dogum Gununuz:");
	printf("%d/%d/%d\n",dogum_gunu.gun,dogum_gunu.ay,dogum_gunu.yil);

	getch();
	return 0;
}