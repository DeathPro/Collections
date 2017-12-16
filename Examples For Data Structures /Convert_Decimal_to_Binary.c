#include<stdio.h>
#include <stdlib.h>

#define MAX 1000

void DecimalToBinary_Fractional() {
    long double fraDecimal, fraBinary, bFractional = 0.0, dFractional, fraFactor = 0.1;
    long int dIntegral, bIntegral = 0;
    long int intFactor = 1, remainder, temp, i;

    printf("Enter any fractional decimal number: ");
    scanf("%Lf", &fraDecimal);

    dIntegral = fraDecimal;
    dFractional = fraDecimal - dIntegral;

    while (dIntegral != 0) {
        remainder = dIntegral % 2;
        bIntegral = bIntegral + remainder * intFactor;
        dIntegral = dIntegral / 2;
        intFactor = intFactor * 10;
    }

    for (i = 1; i <= 6; i++) {

        dFractional = dFractional * 2;
        temp = dFractional;

        bFractional = bFractional + fraFactor * temp;
        if (temp == 1)
            dFractional = dFractional - temp;

        fraFactor = fraFactor / 10;
    }

    fraBinary = bIntegral + bFractional;
    printf("Equivalent binary value: %Lf\n", fraBinary);
}

void DecimalToBinary() {
    long decimal, temp;
    int remainder;
    long binary = 0, i = 1;

    printf("Enter a decimal number\n");
    scanf("%ld", &decimal);
    temp = decimal;
    while (decimal != 0) {
        remainder = decimal % 2;
        decimal = decimal / 2;
        binary = binary + (remainder * i);
        i = i * 10;
    }

    printf("Binary number of %ld is %ld\n", temp, binary);
}

void BinaryToDecimal() {
    long num, binary_val, decimal_val = 0, base = 1, rem;

    printf("Enter a binary number(1s and 0s) \n");
    scanf("%ld", &num);
    binary_val = num;
    while (num > 0) {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("The Binary number is = %ld \n", binary_val);
    printf("Its decimal equivalent is = %ld \n", decimal_val);

}

void FractionalBinaryToDecimal() {
    long double fraDecimal = 0.0, dFractional = 0.0, fraFactor = 0.5;
    long int dIntegral = 0, bIntegral = 0, bFractional[MAX];
    long int intFactor = 1, remainder, i = 0, k = 0, flag = 0;
    char fraBinary[MAX];

    printf("Enter any fractional binary number: ");
    scanf("%s", fraBinary);

    while (fraBinary[i]) {

        if (fraBinary[i] == '.')
            flag = 1;
        else if (flag == 0)
            bIntegral = bIntegral * 10 + (fraBinary[i] - 48);
        else
            bFractional[k++] = fraBinary[i] - 48;
        i++;
    }

    while (bIntegral != 0) {
        remainder = bIntegral % 10;
        dIntegral = dIntegral + remainder * intFactor;
        intFactor = intFactor * 2;
        bIntegral = bIntegral / 10;
    }

    for (i = 0; i < k; i++) {
        dFractional = dFractional + bFractional[i] * fraFactor;
        fraFactor = fraFactor / 2;
    }

    fraDecimal = dIntegral + dFractional;

    printf("Equivalent decimal value: %Lf\n", fraDecimal);
}

int main() {

    int i = 0;


    while (1) {
        printf("1-) Decimal Number to Binary Number\n2-) Fractional Decimal Number to Binary Number\n"
                       "3-) Binary To Decimal\n4-) Fractional Binary Number to Decimal\n5-) Exit\n");
        scanf("%d", &i);
        switch (i) {
            case 1:
                DecimalToBinary();
                break;
            case 2:
                DecimalToBinary_Fractional();
                break;
            case 3:
                BinaryToDecimal();
                break;
            case 4:
                FractionalBinaryToDecimal();
                break;
            case 5:
                exit(0);
            default:
                printf("You Entered Wrong Number ! Please Try Again.\n");
                break;
        }
    }

    return 0;
}