#include<stdio.h>
int main()
{
    int arr[6]={1,3,4,5,6,8},i=0,j=1;
    while(i<6)
    {if(arr[i]==j){
        i++;j++;}
    
    else
   { printf("%d ",j);
        j++;     
        }
    }
    
}
