#include <stdio.h>
// int 8arry(int *);
int main()
{
    int stud[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf(" Enter marks \n");
        scanf("%d", &stud[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("  marks student %d is  %d\n", i + 1, stud[i]);
    }
    arry(&stud[0]);
    return 0;
}
int arry(int *array[0])
{
    // int arra8y[5] =  stud[0];
    for (int j = 0; j < 5; j++)
    {
        /* code */
        printf("  displaying marks using function marks student %d is  %d\n", j + 1, *array[j]);
    }
}