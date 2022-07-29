#include<stdio.h>
int main()
{
    int ld,n,fd,sum=0;
    printf("\n enter the number");
    scanf("%d",&n);
    ld=n%10;
    while (n>=10)
    {
        n=n/10;
        /* code */
    }
    fd=n;
sum=fd+ld;
printf("\n sum of first and last digit is : %d",sum);
return 0;
}