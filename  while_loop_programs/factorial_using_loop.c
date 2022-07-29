#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("\n enter the value");
    scanf("%d",&num);
    while (num>=1)
    {
        fact*=num;
    
    num--;
    /* code */
    }
   printf(" factorial of given number  is %d ",fact);
return 0;    
}