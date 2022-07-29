#include<stdio.h>
int main()
{
    int i=1,n,mul=1;
    printf("enter the number");
    scanf("%d",&n);
    while (i<=10)
    {
        mul=i*n;
        printf(" %d * %d= %d\n",n,i,mul);
        i++;
        /* code */
    }
return 0;
}