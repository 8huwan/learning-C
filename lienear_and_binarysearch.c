#include<stdio.h>
int lienear_search(int arr[],int size,int element){
    for (int i=0;i<size;i++){
        if(arr[i]==element){
            return i;

        }
         
    }
    return -1;
}
int main(){
int arr[]={13,18,26,28,29,32,34,38,40,52,61};
int size=sizeof(arr)/sizeof(int);
int element;
printf("which element you want to search in the arr");
scanf("%d",&element);
int searchindex = lienear_search(arr,size,element);
if(searchindex== -1)
{printf("the elemennt %d is not exist in arr",element);
}
else{
printf("the elementof %d found in index %d\n",element,searchindex);
}
return 0;

}