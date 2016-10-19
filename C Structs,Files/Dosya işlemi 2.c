#include <stdio.h>

int main()
{
	int hesapNo;
	char ad[30];
	double bakiye;
	FILE *ptr;
	ptr = fopen("Dosya Islemii 1.txt", "r");

	if (ptr==NULL)
	{
		printf("Dosya Bulunamadi.\n");
	}
	else
	{
		while (!feof(ptr))
		{
			fscanf(ptr, "%d %s %lf", &hesapNo, ad, &bakiye);
			printf("%d %s %lf\n", hesapNo, ad, bakiye);
		}
	}
	fclose(ptr);
	getch();
	return 0;
}