#include <stdio.h>
int main()
{
    int a, b;
    a = 1;
    while (a <= 5)
    {
        b = 1;
        while (b <= a)
        {
            printf("%d", b);
            b++;
            /* code */
        }
        printf("\n");
        a++;
        /* code */
    }
}
// output
//  1
//  12
//  123
//  1234
//  12345