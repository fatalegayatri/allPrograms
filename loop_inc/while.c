// program for convert decimal number in octul number with header life math.h
#include <math.h>
#include <stdio.h>

int main()

{

    int number, digit, i = 0, octal = 0;

    printf("\nEnter the number:");

    scanf("%d", &number);

    while (number > 0)

    {

        digit = number % 8;

        number = number / 8;

        octal = octal + (digit * pow(10, i));

        i++;
    }

    printf("The octal equivalent of the decimal number = %d", octal);
    return 0;
}