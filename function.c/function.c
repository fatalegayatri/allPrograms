// funciton without agrument and without return value
#include <stdio.h>
int main()
{
    div();
    local();
    return 0;
}
int local()
{
    int a, b, c;
    printf("enter two number");
    scanf("%d %d", &a, &b);
    c = a * b;
    printf("multiplication of two number %d", c);
    return 0;
}
void div()
{

    int b, c, div;
    printf("enter the value ");
    scanf("%d %d", &b, &c);
    div = c / b;
    printf("division of two number is %d\n", div);
}
