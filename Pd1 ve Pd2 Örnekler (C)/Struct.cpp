#include <stdio.h>
#include <conio.h>

int main(void)
{
	enum ana_renkler {
		Kirmizi,
		Mavi,
		Sari
	};

	enum ana_renkler piksel;
	piksel = Mavi;

	if (piksel == Kirmizi)
		printf("K�rm�z� Piksel\n");
	else if (piksel == Mavi)
		printf("Mavi Piksel \n");
	else
		printf("Sar� Piksel \n");
	getch();
	return 0;
}
