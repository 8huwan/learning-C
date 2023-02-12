#include<stdio.h>
void main(){
    int x,r,s=0,i;
    for(i=1;i<=10;i++){
    printf("|\n enter a number");
    scanf("%d",&x);
    while(x!=0){
        r= x % 10;
        s=s+r;
        x=x/10;
    }
    printf("sum of digit is=%d",s);
}}