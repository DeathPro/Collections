#include <stdio.h>

struct musteri
{
	int hesapNo;
	char ad[30];
	char soyad[25];
	double bakiye;
};



int main()
{
	
	struct musteri hesapBilgi = { 0,"","",0.0 };
	FILE *ptr;
	ptr = fopen("Dosya Islemii 3.txt", "r");
	if (ptr == NULL)
		printf("Dosya Bulunamadi.\n");
	else
	{
		printf("%-10s%-16s%-11s%10s\n","HesapNo","Soyad","Ad","Bakiye");
		
		while (!feof(ptr))
		{
			fread(&hesapBilgi, sizeof(struct musteri), 1, ptr);
			if (hesapBilgi.hesapNo!=0)
			{
				printf("%-10d%-16s%-11s%10.2lf\n",hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);
			}
			
		}
		fclose(ptr);
	}

	getch();
	return 0;
}
