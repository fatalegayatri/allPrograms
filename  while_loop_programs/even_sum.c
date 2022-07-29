#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("\n enter a number");
    scanf("%d",&n);
    while (i<=n)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
            /* code */
        }
        i++;
        /* code */
    }
    printf("\n sum of even number is %d",sum);
    return 0;

}