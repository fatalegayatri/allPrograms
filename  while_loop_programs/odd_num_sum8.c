// to find sum of odd number between 1 to n
#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("\n enter the number");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i %2 != 0)
        {printf("%d\n",i);
            sum = sum + i;
        }
        i++; /* code */
    }
    printf("\n sum of odd number=%d", sum);
    return 0;
}