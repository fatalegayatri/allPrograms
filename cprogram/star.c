#include <stdio.h>
int main()
{
    int a, b = 1;
    a = 5;
    while (a >= 1)
    {
        b = 5;
        while (b >= a)
        {
            printf("*");
            b--;
        }
        printf("\n");
        a--;
        /* code */
    }
}