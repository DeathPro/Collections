/*#include <stdio.h>
 #include <stdlib.h>

 int main(){

 int dizi[101];
 int adet = 100, sayac = 0;

 for(int i=0; i<adet; i++){
 printf("%d)Sayi giriniz (0-10 arasinda deger giriniz): ", i+1);
 scanf("%d", &dizi[i]);
 if(dizi[i]>9 || dizi[i]<1){
 printf("Lutfen 0-10 arasinda rakam giriniz!\n");
 i--;
 }
 }

 for(int i=0; i<adet; i++){
 sayac = 1;
 for(int j=i+1; j<adet; j++){
 if(dizi[i] == dizi[j]){
 sayac++;
 dizi[j] = -1;
 }
 }
 if(dizi[i] != -1)
 printf("%d\t%d adet\n", dizi[i], sayac);
 }


 printf("\n");
 return 0;
 }
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

	int dizi[100];
	int sayilar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0, j = 0, k = 0;

	srand(time(NULL));
	/*while (i < 100) {
	 printf("%d)Sayi giriniz (0-10 arasinda deger giriniz): ", i + 1);
	 scanf("%d", &dizi[i]);
	 i++;
	 if (dizi[i] > 9 || dizi[i] < 1) {
	 printf("Lutfen 0-10 arasinda rakam giriniz!\n");
	 i--;
	 }
	 }
	 */

	while (i < 100) {
		dizi[i] = rand()%9 + 1;//0-10 arasinda random sayi atandi :)
		i++;
	}

	for (j = 0; j < 9; j++) {
		k = 0;
		for (i = 0; i < 100; i++) {
			if (dizi[i] == sayilar[j])
				k++;
		}
		printf("%d Sayisindan Kac Tane Var --> %d\n", sayilar[j], k);
	}

	printf("\n");
	return 0;
}
