#include <stdio.h>

struct musteri
{
	int hesapNo;
	char ad[29];
	char soyad[25];
	double bakiye;
};



int main()
{
	int i;
	struct musteri bosMusteri = { 0,"","",0.0 };
	FILE *ptr;
	ptr = fopen("Dosya Islemii 2.txt", "w");
	if (ptr == NULL)
		printf("Dosya Bulunamadi.\n");
	else
	{
		for (i=1;i<=100;i++)
		{
			fwrite(&bosMusteri, 1*sizeof(struct musteri), 1, ptr);
		}
		fclose(ptr);
	}
	
	return 0;
}
