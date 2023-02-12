#include<iostream>
using namespace std;
template<class t1, class t2>
class data{
    public:
    t1 data1;
    t2 data2;
    data(t1 a,t2 b){
    data1= a;
    data2= b;
    }
     void dishplay(){
        cout<<this->data1<<"   "<<this->data2<<endl;
     }
};
int main()
{data <char,int> l('s', 15);
l.dishplay();

    return 0;
}