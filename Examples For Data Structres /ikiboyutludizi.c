#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strcmp fonksiyonunu yaz....    int str_cmp(char **, char **); esitse 0 1. 2. den büyükse 1 dondursun.
#define MAXWORD 50
#define N 10

void sort_words(char **a) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (strcmp(&a[i], &a[j]) > 0) //Siralama Algoritmasi//1. 2. den büyükse 1 dondurur.
				swap(&a[i], &a[j]);
		}
	}
}
void swap(char **p, char **q) {
	char *temp = *p;
	*p = *q;
	*q = temp;
}
void wrt_words(char **a) {
	int i = 0;
	for (i = 0; i < N; i++)
		printf("%s\n", a[i]);
}

int main() {
	char word[MAXWORD];
	char *w[N]; //burayi **p ile degistirip tekrar yaz.Hafizadan yer açacan.
	int i;
	for (i = 0; i < N; i++) {
		printf("Bir Kelime Giriniz: ");
		scanf("%s", word);
		w[i] = calloc(strlen(word) + 1, sizeof(char)); //iki boyutlu dizi tasarlaniyor..
		strcpy(w[i], word);
	}
	sort_words(w);
	wrt_words(w);

	return EXIT_SUCCESS;

}
