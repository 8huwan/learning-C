#include<iostream>
using namespace std;
class box{
int a,b;
public:
box(int x,int y){
    a=x;
    b=y;
}
box(int x){
    a=x;
    b=0;
}
box(){
    a=0;
    b=0;
}
void printernum(){
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
};
int main(){

    box c1(3,5);
    c1.printernum();
    box c2(7);
    c2.printernum();
    box c3;
    c3.printernum();
}

