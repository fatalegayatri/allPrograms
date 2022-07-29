#include<stdio.h>
int main()
{
    int n,pro=1,ld;
    printf("\n enter the number ");
    scanf("%d",&n);
    while (n>=1)
    {
        ld=n%10;
        pro*=ld;
        n=n/10;
        /* code */
    }
    printf("\n product of digit in given number =%d",pro);
    return 0;
    
    
}