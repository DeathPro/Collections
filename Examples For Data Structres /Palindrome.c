#include <stdio.h>
#include <string.h>

void fonk1(char a[]) {
	char b[25];
	int i;
	int c = 0;
	//printf("%d\n", strlen(a));
	for (i = strlen(a) - 1; i >= 0; i--) //strlen kac karakter oldugunu dondurur.
			//(-1) NULL karakteri almamak icin koydum.NULL karakterini atarsa b ye o zaman dizi
			//Bitmis olur.Daha da eleman kabul etmez.strlen in son sayisi NULL karakterine aittir.
			// (-1) onemli !!!!!!!!!
			{
		b[c] = a[i];
		c++;
		//printf("%c\n", a[i]);
	}
	puts(b);
	if (strcmp(b, a) == 0)	//strcmp eger iki dizi esitse 0 degerini dondurur.
		printf("Girilen Kelime Polindrome\'dur\n");
	else
		printf("Girilen Kelime Polindrome Degildir.\n");
}
void fonksuz(char a[]) {
	char b[25];
	int i;
	int c=0;
	for (i = 0; a[i] != '\0'; i++);//NULL gozuktukten sonra dongu duruyo yani i sayimiz
	// a[i] de NULL i gosteriyor suan


	c = i - 1;//burdada ayni -1 koymasam assagida ilk null karakterini atacak diziye
	// ve diziyi bitirecek.
	i = 0;
	while (c >= 0) {
		b[i] = a[c];
		//puts(b);
		i++;
		c--;
	}
	c = 0;//bundan sonra da c yi girilen cumle palindrome mu degil mi onun icin kullaniyorum.
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != b[i])
			c++;
	}
	if (c == 0)
		printf("Girilen Kelime Polindrome\'dur\n");
	else
		printf("Girilen Kelime Polindrome Degildir.\n");

}

int main() {
	char a[25];

	printf("Bir Kelime Giriniz : ");
	scanf("%s", a);
	fonk1(a);
	printf("\n\n\n");
	fonksuz(a);

}
