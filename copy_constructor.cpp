#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{
  private:
  int a,b;
  public:
  complex(int x,int y){
    a=x; b=y;
  }
  complex( int k){
    a=k;

  }
  complex()
  {}
  complex(complex & obj){
    a=obj.a;
     b=obj.b;
    cout<<a<<endl<<b;
  }
};
int main(){
    complex c1(3,4),c2(6),c3;
    complex c4(c1);

    getch();
}