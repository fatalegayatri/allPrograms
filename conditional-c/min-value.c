//find min value using terminary (conditional)operator
#include<stdio.h>
int main()
{
    int a,b,min;
    printf("\n enter the values of a & b");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    printf("\n min value is %d",min);
    int max;
    max=a>b?a:b;
    printf("\n maximum value is %d",max);
    max=max==min? printf("\n both value is same %d",max):printf("\n both values are different");
    return 0;

}