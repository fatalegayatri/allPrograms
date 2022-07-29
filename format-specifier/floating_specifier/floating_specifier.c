#include<stdio.h>
float floating(float f);
int main()
{
    float a,b;
    printf("\n enter the value ");
    scanf("%e %e",&a,&b);
    a=a*b;
    floating( a);

}
float floating(float f)
{
float a,b;
// f=a*b;
printf("%e",f);
return f;

}