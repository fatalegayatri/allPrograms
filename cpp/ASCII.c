#include <stdio.h>
int main()
{
    int num = 1;
    char a;
        while (num <= 127)
    {
        a = num;
        printf("ascii value = %d and its symbol = %c\n", num, a);
        num++;
        /* code */
    }
}
