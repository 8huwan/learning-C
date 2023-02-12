#include<iostream>
using namespace std;

template <class T>
class vector{

    public:
    T * arr;
    int size;
    vector(int m){
        size = m;
        arr=new T[size];
    } 
    T dot_product (vector &v){
        T d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }            
        return d;   
    }
};

int main()
{ vector <float>v1(3);
v1.arr[0]= 23.58;
v1.arr[1]=12.65;
v1.arr[2]=21.25;
vector<float> v2(3);
v2.arr[0]= 23.25;
v2.arr[1]=12.2;
v2.arr[2]=21.8;
float a=v1.dot_product(v2);
cout<<" the dot product of the number is = "<<a<<endl;
    return 0;
}