#include<stdio.h>
int main()
{
    int n,temp,ld,fd;
    printf("\n enter the value ");
    scanf("%d",&n);
    ld=n%10;
    while (n>=10)
    {
n=n/10;
        /* code */
    }
    fd=n;
    temp=fd;
    fd=ld;
    ld=temp;
    printf("\n value after swap fd=%d & ld=%d",fd,ld);
    return 0;
}