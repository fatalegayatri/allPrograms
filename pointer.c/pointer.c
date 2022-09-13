#include<stdio.h>
int main()
{
    int a=2;
    int *p;
    p=&a;
    printf("\n address of a is :%u",&a);
    printf("\n value of *P is %d",*p);
    printf("\n address of a using pointer is %u",p);
    return 0;

}