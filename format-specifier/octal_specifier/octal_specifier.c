#include <stdio.h>
int main()
{
    int a, b,c;
    printf("\n enter the two octal number");
    scanf("%o %o", &a, &b);
    c= a %b;
    printf("\n modolus of two octal number is %o", c);
    return 0;
}