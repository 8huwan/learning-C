#include<iostream>
using namespace std;
class add{

public:
int a,b;
void input(){
  cout<<"entar the velue of A and B"<<endl;
  cin>>a>>b;
}
void sum() {
    cout<<"A+B= "<<a+b<<endl;

}
void disp(){
    cout<<"A= "<<a<<endl<<"B= "<<b<<endl;
}

};
class add_mul:public add{
    public:
    
     void mul(){
        cout<<"A*B ="<<a*b<<endl;
     }
};
class add_mul_sub:public add_mul{
   public:
    
void sub(){
    cout<<"A-B= "<<a-b<<endl;
}
};



int main(){
    add_mul_sub obj;
    obj.input();
    obj.disp();
    obj.sum();
    obj.mul();
    obj.sub();

}
