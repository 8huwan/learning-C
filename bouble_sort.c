#include<stdio.h>
printarr(int*A,int n){
    for(int i=0;i<n;i++){
    printf("%d ",A[i]);
  
    }
      printf("\n");
}
boublesort(int*A,int n){
    int temp;
    for(int i=0;i<n-i;i++){

        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

}
int main(){
int A[]={23,25,21,85,46,444};
int n=6;
printarr(A,n);
boublesort(A,n);

printarr(A,n);

return 0;
}