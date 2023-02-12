#include<iostream>
using namespace std;

int main()
{
int i=1,choice,a,b,s;
while(i<=10)
{
cout<<"1.addition"<<endl;
cout<<"2.odd even"<<endl;
cout<<"3.printing n number"<<endl;
  
cout<<"enter your choice";
cin>>(choice);

switch (choice)
{
    case 1:
            cout<<"enter two number";
            cin>>a>>b;
            s=a+b;
            cout<<" sum is "<<s<<endl;
            break;
    case 2:
            cout<<"enter your number";
            cin>>a>>b;

            if(a%2==0)
            cout<<"even number"<<endl;
            else
            cout<<"odd number"<<endl;
            break;
    case 3:
            cout<<("enter n number");
            cin>>a>>b;
             for(b=1;b<=a;b++)
             cout<<" "<<b;
             break;
    default:
            cout<<("invalid choice");


           return 0;

}
}
}