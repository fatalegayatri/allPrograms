#include <stdio.h>

// void display(int *, int *, int *);
int main()
{

    int mark[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %dth student marks in %dth sub\n", i + 1, j + 1);
            scanf("%d", &mark[j][i]);
            /* code */
            /* code */
        }
        // void display(mark[1]);
        // void display( int 89mark[3][5], int stud, int sub);
    }
    display(&mark[0][0]);
    return 0;
}
void display(int *mark[0][0])
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("the marks of %dth student  in sub %d= is %d\n", i + 1, j + 1, *mark[i][j]);
            /* code */
        }

        /* code */
    }
}