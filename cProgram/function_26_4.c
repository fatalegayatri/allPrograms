#include<stdio.h>
int main()
{
    float a=13.5;
    float *b,*c;
    b=&a;
    c=b;
    printf("\n %u %u %u",&a,b,c);
    printf("\n %f %f %f %f %f",a,*(&a),*&a,*b,*c);
    int n=135,m=135, k;
    k=pass(n,m);
    printf("\n %d",k);


    return 0;

}
int pass(int i,int j)
{int c;

c=i+j;
return c;
}