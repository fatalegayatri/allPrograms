// to convert decimal number into binary

#include <stdio.h>
int main()
{
    int a = 0, arr[10], n, j;
    printf("\n enter the number ");
    scanf("%d", &n);
    while (n > 0)
    {
        arr[a] = n % 2;

        n = n / 2;
        a++; /* code */
    }

    j = a - 1;
    while (j >= 0)

    {
        //  j=a-1;
        printf("%d", arr[j]);
        j--;
    }
    return 0;
}
// output
// enter decimal number 5
// equivalent binary = 101