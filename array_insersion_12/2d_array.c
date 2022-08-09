#include <stdio.h>
int main()
{
    int stud = 3;
    int sub = 5;
    int mark[3][5];
    for (int i = 0; i < stud; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("Enter the %dth student marks in %dth sub", i + 1, j + 1);
            scanf("%d", &mark[j][i]);
            /* code */
            /* code */
        }
        void display(int mark[0] int stud int sub);
        // void display(mark[1]);
        // void display( int 89mark[3][5], int stud, int sub);
    }
    return 0;
}
void display(*mark[0] int stud int sub)
{
    for (int i = 0; i < stud; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("the marks of %dth student  marks is %d", i + 1, mark[i][j]);
            /* code */
        }

        /* code */
    }
}