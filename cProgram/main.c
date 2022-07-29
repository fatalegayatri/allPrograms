#include <stdio.h>
#define PL 3.14
int g;
int main()
{
    int num[10], i, sum = 0;

    printf("enter the 10 number: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);

        sum += num[i];
    }

    printf("sum %d\n1", sum );
    printf("%f ",PL);

    return 0;
}
