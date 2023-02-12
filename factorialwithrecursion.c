#include<stdio.h>
#include<conio.h>
long factorial(int n)
{
    if(n>0){
    return(n*factorial(n-1));
    }
    else{
        return(1);
    }
}
int main(){
    printf("factorial of 6 is:%ld",factorial(6));
    getch();
}