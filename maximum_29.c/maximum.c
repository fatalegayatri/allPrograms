#include<stdio.h>
int main()
{
    int num1,num2,num3;
printf("\n enter three numbers");
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>num2)
{
    if (num1>num3)
    {
        printf("\n %d is maximum number ",num1);

        /* code */
    }
    else
    {
        printf("%d is maximum number \n",num3);

    }
}
else{
    if(num2>num3)
{
    printf("\n %d is maximum number",num2);

}
else{
    //printf("\n all numbers are same");
    printf("\n %d is maximun number",num3);

}
}
return 0;
}