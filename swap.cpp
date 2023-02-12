#include<iostream>
using namespace std;
/*call by refrense/*
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

    }/*

/*call by value*/
void swap(int &a,int& b){
int temp=a;
       a=b;
       b=temp;
}
int main(){
    /*call by refrense/*
    /*int a=4;int b=6;
    cout<<"A =  "<<a<<endl<<"B=  "<<b<<endl;
    cout<<"AFTER SWAP THE VALUE OF A AND B IS"<<endl;
    swap(&a,&b);
     cout<<"A =  "<<a<<endl<<"B=  "<<b<<endl;
    
     return 0;

}*/
/*call by value*/
 int x=4;int y=6;
    cout<<"A =  "<<x<<endl<<"B=  "<<y<<endl;
    cout<<"AFTER SWAP THE VALUE OF A AND B IS"<<endl;
    swap(x,y);
     cout<<"A =  "<<x<<endl<<"B=  "<<y<<endl;
    
     return 0;}
