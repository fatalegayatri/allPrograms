#include<stdio.h>
int main()
{
int arr[5]={5,4,2,1};
int n=4,i=0,index=2,value=3;
printf("\n printing array before insersion");
for ( i = 0; i < 4; i++)
{
    printf("\n arr[%d]=%d",i,arr[i]);

    /* code */
}
for ( i = n; i>=index;i--)
{
    arr[i+1]=arr[i];

}
arr[index]=value;
n++;
printf("\n printing array after insersion");
for(i=0;i<n;i++)
{
printf("\n arr[%d]=%d",i,arr[i]);
}
return 0;

}