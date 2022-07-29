#include<stdio.h>
int main()
{
    int n,count=1;
    printf("\n enter a number");
    scanf("%d",&n);
    while (n>=10)
    {
        n=n/10;
     count++;
        /* code */
    }
   printf("\n number of digit in given number is %d",count);
   return 0; 
}