#include<iostream>
using namespace std;

class base{
    protected:
    int var_base=10;
    public:
    virtual void dishplay(){
        cout<<"base calss variable: ="<<var_base<<endl;
    }
};
class drived:public base{
    protected:
    int var_drived=20;
    public:
    void dishplay(){    
        cout<<"drived class variable is : ="<<var_drived<<endl;

    }
};
int main()
{base *base_class_pointer;
base obj1;
drived obj2;
base_class_pointer=&obj2;
base_class_pointer->dishplay();
obj1.dishplay();
obj2.dishplay();
    return 0;
}