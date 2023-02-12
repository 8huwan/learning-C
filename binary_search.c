#include<stdio.h>
int binary_search(int arr[],int size,int element){
    int mid,law, high;
    law=0,high=size-1;
    
    printf(" low:%d  high:%d",mid, size);
    while(law<=high){
    
        mid=(law+high)/2;
        
        if(arr[mid]==element){
            return mid+1;
            }

        if(arr[mid]<element){
            law=mid+1; 
        }
        if(arr[mid]>element){
         high=mid-1;
}printf(" low:%d  high:%d",law, high);
        }
    return -1;
}
int main(){
int arr[]={13,18,26,28,29,32,34,38,40,52,61};
int size=sizeof(arr)/sizeof(int);
int element;
printf("which element you want to search in the arr");
scanf("%d",&element);
int searchindex = binary_search(arr,size,element);
if(searchindex== -1)
{printf("the elemennt %d is not exist in arr",element);
}
else{
printf("the elementof %d found in index %d\n",element,searchindex);
}
return 0;

}