//wap to find  sum of digit in given number
#include<stdio.h>
int main()
{
    int n,sum=0,ld;
    printf("\n enter the value ");
    scanf("%d",&n);
    while (n>=1)
    {
        ld=n%10;
        sum+=ld;
       n=n/10;
        /* code */
    }
printf("\n sum of digit in given number=%d",sum);
return 0;
    
}