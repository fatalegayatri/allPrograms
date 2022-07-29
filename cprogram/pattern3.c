#include <stdio.h>
int main()
{
    int a, b;
    a = 5;
    while (a >= 1)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d\t", b);
            b++;
        }
        printf("\n");
        a--;
    }
    return 0;
}