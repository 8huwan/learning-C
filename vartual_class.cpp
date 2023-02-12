#include<iostream>
using namespace std;
class Student{
protected:
int roll_nu;
public:
void set_roll_nu(int x){
    roll_nu=x;

}
void print_roll_nu(){
    cout<<"your roll  number is :"<<roll_nu<<endl;
}
};
class test:virtual public Student{
protected:
float math,physics;
public:
void set_marks(int m1,int m2){
    math=m1;
    physics=m2;
}
void print_marks(){
    cout<<"math : ="<<math<<endl<<"physics : ="<<physics<<endl;
}
};
class sport :virtual public Student{
 protected:   
int scor;
public:
void set_scor(int s){
    scor=s;

}
void print_scor(){
    cout<<"your sport score is : "<<scor<<endl;

}
};
class result:public sport,public test{
private:
float total;
public:
void dishplay(){
    total= math + physics + scor;
    
    print_roll_nu();
    print_marks();    
    print_scor();
    cout<<"your tatle marks is ::"<<total<<endl;
}
};
int main(){
result bhuwan;
bhuwan.set_roll_nu(70);
bhuwan.set_marks(78.5,58.9);
bhuwan.set_scor(9);
bhuwan.dishplay();
}