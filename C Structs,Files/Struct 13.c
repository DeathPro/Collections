#include <stdio.h>
#include <string.h>

struct sahis_bilgileri 
{
	char isim[40];
	int boy;
};

struct sahis_bilgileri bilgileri_al(void)
{
	struct sahis_bilgileri sahis;
	printf("Isim >");
	gets(sahis.isim);
	printf("Boy > ");
	scanf("%d", &sahis.boy);
	return sahis;
}

void bilgileri_göster(struct sahis_bilgileri sahis)
{
	printf("Ad: %s\n",sahis.isim);
	printf("Boy: %d\n", sahis.boy);


}

int main(void)
{
	struct sahis_bilgileri kisi;
	kisi = bilgileri_al();
	bilgileri_göster(kisi);

	getch();
	return 0;
}