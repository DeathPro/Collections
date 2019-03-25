#include <stdio.h>
#include <stdlib.h>

double loopfac(double sayi1) {
    int i;
    double result = 1;
    for (i = 1; i <= sayi1; i++)
        result = result * i;
    printf("%.0lf! = %.0lf\n", sayi1, result);
    return result;
}

double looprec(double sayi1) {
    if (sayi1 == 1 || sayi1 == 0)
        return 1;
    return sayi1 * looprec(sayi1 - 1);
}

void basamak(double sayi1) {
    int count = 0;
    double a = 1.0;
    double exsayi1=sayi1;
    while (a <= sayi1) {
        count++;
        a=a*10;
    }
    printf("%.0lf Basamak Sayisi --> %d\n", exsayi1, count);
}

int main(int argc, char **argv) {
    int a;
    double sayi;
    double result=1;
    while (1) {
        printf("1-)Döngü ile Factöriyel Hesaplama\n2-)Recursive Fonksiyon ile Faktöriyel Hesaplama\n"
                       "3-)Faktöriyel Sonucunun Basamak Sayısı\n4-)Ekranı Temizle\n5-)Exit\n");
        scanf("%d", &a);
        switch (a) {
            case 1:
                printf("Lüften Bir Sayi Giriniz: ");
                scanf("%lf", &sayi);
                result = loopfac(sayi);
                break;
            case 2:
                printf("Lüften Bir Sayi Giriniz: ");
                scanf("%lf", &sayi);
                result = looprec(sayi);
                printf("%.0lf! = %.0lf\n", sayi, result);
                break;
            case 3:
                printf("Faktöriyel Sonucu : %.0lf\n",result);
                basamak(result);
                break;
            case 4:
                system("clear");
                break;
            case 5:
                exit(0);
            default:
                printf("Yanlış Numara Girdiniz. Lütfen Tekrar Deneyiniz...\n");
                break;
        }
    }
    return 0;
}