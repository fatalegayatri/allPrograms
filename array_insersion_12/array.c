#include <stdio.h>
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
    return 0;
}