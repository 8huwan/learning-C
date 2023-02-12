#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
    void set_data(int i,float r){
        id=i;
        price=r;
    }
    void get_data(){
        cout<<"code is the item is : "<<id<<endl;
        cout<<"price of the item is : "<<price<<endl;
    }
};
int main()
{
    int size=3;
    shopitem *ptr =new shopitem[size];
    int p,i;
    float q;
    shopitem * temptr=ptr;
    for(i=0;i<=size;i++){
        cout<<"entre id and price "<<i+1<<endl;
        cin>>p>>q;
        ptr->set_data(p,q);
        ptr++;
    }
     for(i=0;i<=size;i++){
        cout<<"item no is : "<<i+1<<endl;
        temptr->get_data();
        temptr++;
    }
    return 0;
}