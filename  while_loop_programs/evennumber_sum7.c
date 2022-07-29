#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("\n enter the value of n");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2==0)
        {printf("\n %d",i);
            sum+=i;
        }
        i++;
    }
    printf("\n sum of even number is : %d",sum);
    return 0;
}