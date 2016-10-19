#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


//int main()
//{
//	unsigned A = 0xA3E8;
//	unsigned B = 0xFBC3;
//	printf("%X", (A&B) >> 1);
//
//	getch();
//	return 0;
//}

//
//char* fonksiyon(char *str)
//{
//	int n, k, temp;
//	n = strlen(str);
//	for (k = 0; k < n / 2; k++)
//	{
//		temp = str[k];
//		str[k] = str[n-k-1];
//		str[n-k-1] = temp;
//	}
//	return str;
//}
//void main()
//{
//	char *s = (char *)malloc(80 * sizeof(char));
//	gets(s);
//	printf("\n %s %s", s, fonksiyon(s));
//
//	getch();
//	return 0;
//}



int main()

{
	struct ogrenci
	{
		char isim[20];
		char ders[10];
		float ort;
	};

	struct ogrenci hesap = { "","",0.0 };
	FILE *ptr;
	ptr = fopen("Ogrenci.dat", "r+");
	int i = 0;
	if (ptr == NULL)
		printf("Dosya Bulunamadi.\n");
	else
	{
		/*printf("Isim, Ders ve Ortalama Giriniz: ");
		scanf("%s %s %f", hesap.isim, hesap.ders, &hesap.ort);
		
		while (!feof(stdin))
		{
			
			fseek(ptr, i * sizeof(struct ogrenci), SEEK_SET);
			fwrite(&hesap, sizeof(struct ogrenci), 1, ptr);
			i++;
			printf("Isim, Ders ve Ortalama Giriniz: ");
			scanf("%s %s %f", hesap.isim, hesap.ders, &hesap.ort);
		}*/

		fseek(ptr, i * sizeof(struct ogrenci), SEEK_SET);
		fread(&hesap, sizeof(struct ogrenci), 1, ptr);
		

		while (!feof(ptr))
		{
			printf("%s %s %.2f\n", hesap.isim, hesap.ders, hesap.ort);
			if (hesap.ort > 55 && hesap.ort < 60)
			{
				hesap.ort = 60;
				fseek(ptr, i * sizeof(struct ogrenci), SEEK_SET);
				fwrite(&hesap, sizeof(struct ogrenci), 1, ptr);
			}
			i++;
			fseek(ptr, i * sizeof(struct ogrenci), SEEK_SET);
			fread(&hesap, sizeof(struct ogrenci), 1, ptr);
			
		}
		rewind(ptr);
		i = 0;
		printf("\n\n\n");
		fseek(ptr, i * sizeof(struct ogrenci), SEEK_SET);
		fread(&hesap, sizeof(struct ogrenci), 1, ptr);
		while (!feof(ptr))
		{
			printf("%s %s %.2f\n", hesap.isim, hesap.ders, hesap.ort);
			i++;
			fseek(ptr, i * sizeof(struct ogrenci), SEEK_SET);
			fread(&hesap, sizeof(struct ogrenci), 1, ptr);
		}
		
	}
	fclose(ptr);

	getch();
	return 0;
}