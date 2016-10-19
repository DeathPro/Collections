#include <stdio.h>

int main()
{
	FILE *ptr;
	
	/*ptr=fopen("Deneme.txt", "w");
	fputs("Merhaba Dunya", ptr);*/

	/*char isim[] = "Ahmet";
	ptr = fopen("Deneme 1.txt", "w");
	fprintf(ptr, isim);*/

	/*ptr = fopen("Carpim Tablosu.txt", "w");
	int i, j,tp=0;
	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i <= 10; i++)
		{
			tp = i*j;
			fprintf(ptr,"%d*%d=%d\t",i,j,tp);

		}
		fprintf(ptr,"\n");
	}*/

	/*ptr = fopen("Ogrenci.txt", "w");
	char isim[30], okul[50], bolum[100];
	printf("Bir Ogrencinin Ismini,Okulunu ve Bolumunu Giriniz: ");
	scanf("%s %s %s",isim,okul,bolum);
	fprintf(ptr, "1. Ogrenci Bilgileri \n%s\n%s\n%s\n", isim, okul, bolum);*/

	ptr = fopen("Ogrenci 2.txt", "a");
	
	char isim[30], okul[50], bolum[100];
	printf("Bir Ogrencinin Ismini,Okulunu ve Bolumunu Giriniz: ");
	scanf("%s %s %s", isim, okul, bolum);
	fprintf(ptr, "\n1. Ogrenci Bilgileri \n%s\n%s\n%s\n", isim, okul, bolum);

	fclose(ptr);
}