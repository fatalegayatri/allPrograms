#include <stdio.h>
int main()
{
    int age;
    printf("\n enter your age");
    scanf("%d", &age);
    age = (age >= 18) ? printf("\n you are eligible for  voting") : printf("\n you are not eligible for voting");
    return 0;
}