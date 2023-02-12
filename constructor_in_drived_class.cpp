



#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
    base1(int i){
         data1=i;
         cout<<"base1 constructor called"<<endl;
    }
    void printdata_base1(){
       cout<<"the velue of data 1 is : "<<data1<<endl;

    }
};
class base2{
int data2;
   public:
    base2(int i){
         data2=i;
           cout<<"base2 constructor called"<<endl;
    }
    void printdata_base2(){
      
  cout<<"the velue of data 2 is : "<<data2<<endl;
    }
};
class drived:public base1,public base2{
    int drived_data1,drived_data2;
    public:
    drived(int a,int b,int c,int d) :base1(a),base2(b){
        drived_data1=c;
        drived_data2=d;
        cout<<"drived class constructor called"<<endl;
    }
    void printdata_drivedd(){
      
  cout<<"the velue of drived_data 1 is : "<<drived_data1<<endl;
   cout<<"the velue of drived_data 2 is : "<<drived_data2<<endl;
    }
}; 
int main(){
    drived bhuwan (4,5,6,7 );
    bhuwan.printdata_base1();
    bhuwan.printdata_base2();
    bhuwan.printdata_drivedd();



}
