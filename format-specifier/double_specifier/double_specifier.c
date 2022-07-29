#include<stdio.h>
 double flat(double f);
int main()
{
    double   a;
    printf("\n enter the value ");
    scanf("%lf",&a);
    printf("\n double type  number is %lf ",flat(a));
    return 0;



}
double flat(double f)
{
    return f+1;
}