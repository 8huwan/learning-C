#include<stdio.h>   
#define sqr(x) x*x
int main(){
    int i=-3,j=3,k=0,m;
    
   int x;
    m=1;
   x=sqr(j++);
    printf(" %d",x,j,k,m);
    return 0;
}