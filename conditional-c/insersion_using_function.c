#include<stdio.h>
int display(int arr [],int n)
{for (int i = 0; i < n; i++)
{
    printf("%d \t",arr[i]);
}
printf("\n");
return 0;

}
int main(){
    int arr[100]={1,3,4,5};
    int size=4, element=2,index=1;
    display(arr, size);
    insersion(arr,size,element,100,index);
size-=1;
    display(arr,size);
    return 0;
}
 void insersion(int arr[],int size,int element, int capacity,int index)
{
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];

    }
    arr[index]=element;
}