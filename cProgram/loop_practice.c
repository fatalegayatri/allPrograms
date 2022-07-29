#include <stdio.h>
void main()
{
    int a, b = 0;
    printf("enter the number ");
    scanf("%d", &a);
    while (a >= 0)
    {
        while (b <= a)
        {

            printf("*");
            /* code */
            b++;
        }
        printf("\n");
        printf("#");
        a--;
    }
    
}