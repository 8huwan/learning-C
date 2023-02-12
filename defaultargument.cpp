#include<conio.h>
#include<iostream>
using namespace std;

int add(int,int);
int main(){

    int a,b;

    cout<<"enter two number";
    cin>>a>>b;
    cout<<"sum is"<<add(a,b);
    getch();




}
int add(int x,int y){
    return(x+y);
}