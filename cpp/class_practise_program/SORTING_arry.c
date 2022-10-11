#include <stdio.h>
int main()
{
    const int a = 4;

    int aryy[a] = {3, 5, 1, 7};
    for (int i = 0; i < aryy[4]; i++)
    {
        printf("the are inedx no is %d", aryy[i + 1]);
        /* code */
    }
    return 0;
}