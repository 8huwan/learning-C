#include<stdio.h>
long factorial(int n){
    if(n>0){
        return(n*factorial(n-1));

    }
    else{
        return(1);

    }   
}
void main(){
    printf("factorial of 10 is%d",factorial(10));

}