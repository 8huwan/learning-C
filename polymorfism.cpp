#include<iostream>
using namespace std;
// class a{
//     private:
//     int a,b,c;
//     public:
//     int add(int x,int y){
//         a=x;
//         b=y;
//         int sum=a+b;
//         return sum;
//     }
//     int add(int x,int y,int z){
//         a=x;
//         b=y;
//         c=z;
//         int res=a+b+c;
//         return res;
//     }
    
// };
class base{
    public:
     void display(){
        cout<<"calld base class obj "<<endl;

     }

};
class child:public base{
    public:

void display() {
        cout<<"calld child class obj "<<endl;
        base::display();
}
};
int main()
{
//     a obj;
    
// cout<<obj.add(3,4);
// cout<<obj.add(5,6,7);
child obj;
base*ptr=&obj;
ptr->display();
obj. display();

    return 0;
}