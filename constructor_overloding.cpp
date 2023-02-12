#include<iostream>
#include<conio.h>
using namespace std;
class complex{
private:
int a,b;
public:
complex(int x,int y){
    a=x; b=y;
    cout<<a<<" "<<b<<endl;
}
complex(int k){
    a=k;
    cout<<a<<endl;
}
complex(){
    
} 

};


int main()
{
    complex c1(3,4),c2(5),C3;
}