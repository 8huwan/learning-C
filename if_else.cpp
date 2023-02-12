#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"plese entere your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you are not come to the party (SORRY)"<<endl;
    } 
    else if(age==18){
        cout<<"you are kid plese take your kid pass for counter";
    }
    else {
        cout<<"your most welcome sir plese come and enjoy the party";
    }
}
