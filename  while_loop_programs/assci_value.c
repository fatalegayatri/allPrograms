#include<stdio.h>
int main()
{
    int num=1;
    char a;
    while (num<=127)
    {
        a=num;
        printf("\n ascii value =%d and symbol=%c",num,a);
        num++;        /* code */
    }
    return 0;
}