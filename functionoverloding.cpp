#include<iostream>
using namespace std;
int area(int,int);
float area(int);
int main(){
    int r;
    cout<<"entar the redias of circul";
    cin>>r;
    float A=area(r);
    cout<<"\narea of circul is::"<<A;

    int l,b,h;
    cout <<"\nenter the lenth and bredth of rectangle";
    cin>>l>>b;
    h=area(l,b);
    cout<<"\narea of rectangle is::"<<h;


}
float area(int R){
    return(3.14*R*R);
}
int area(int L,int B){
    return(L*B);

}