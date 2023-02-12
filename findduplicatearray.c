#include<stdio.h>
int main()
{
    int arr[5]={1,2,2,3,4},i;
    for(i=0;i<4;i++)
    {
    if(arr[i]==arr[i+1])
    {
    printf("%d ",arr[i]);
    }


    }

}