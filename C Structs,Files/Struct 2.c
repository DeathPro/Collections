#include <stdio.h>
#include <conio.h>

int main(void)
{
	//Yeni veri tipini olu�turuyoruz
	//ayr�ca yeni veri tipinden,
	//bir degisken tanimliyoruz
	enum boolean {
		false = 0,
		true = 1
	} dogru_mu;

	dogru_mu = true;
	if (dogru_mu == true)
		printf("Dogru\n");
	
	getchar();

	return 0;
}