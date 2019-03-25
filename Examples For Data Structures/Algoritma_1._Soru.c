#include <stdio.h>
#include <string.h>

int main(int argc, int **argv) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int j = 0;
    int result = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            result = result + a[i] * a[j];
        }
    }
    printf("Result = %d",result);
    return 0;
}
//tek for döngüsüne düşür bunu.şimdiki çalışma zamanı O(n^2).çalışma zamanı O(n) olan kodu yaz.