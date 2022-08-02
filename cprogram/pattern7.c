#include <stdio.h>
int main()
{
    int a, b;
    a = 65;
    while (a <= 69)
    {
        b = 65;
        while (b <= a)
        {
            printf("%c", b);
            b++; /* code */
        }
        printf("\n");
        a++;
        /* code */
    }
    return 0;
}