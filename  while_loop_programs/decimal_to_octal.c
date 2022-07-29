#include <stdio.h>
int main()
{
  int on[10], num, i, j;
  printf("\n enter the number");
  scanf("%d", &num);
  for (i = 0; 0 < num; i++)
  {
    on[i] = num % 8;
    num = num / 8;
    //   printf("%d",on[i]);
    /* code */
  }
  //   printf("\n %d",on[i]);
  printf("\n Equivalent octal number");
  for (j = i - 1; j >= 0; j--)
  {
    printf("%d", on[j]);

    /* code */
  }
  return 0;
}