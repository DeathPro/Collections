#include <stdio.h>

int main(void) {
	struct tarihler
	{
		int yil, ay, gun;
	}siz, kiz_kardes;
	struct tarihler erkek_kardes;
	printf("Dogum Gununuzu Giriniz: ");
	scanf("%d-%d-%d", &siz.gun, &siz.ay, &siz.yil);
	printf("Kiz Kardesinizin Dogum Gununu Giriniz: ");
	scanf("%d-%d-%d", &kiz_kardes.gun, &kiz_kardes.ay, &kiz_kardes.yil);
	printf("Erkek Kardesinizin Dogum Gununu Giriniz: ");
	scanf("%d-%d-%d", &erkek_kardes.gun, &erkek_kardes.ay, &erkek_kardes.yil);
	printf("%d-%d-%d", erkek_kardes.gun, erkek_kardes.ay, erkek_kardes.yil);
	getch();
	return 0;
}