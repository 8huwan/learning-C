#include<iostream>
#include<fstream>
using namespace std;
int main()

{
    string name,roll; 
    
     ifstream myin1("name.txt");
     ifstream myin2("rollnum.txt");
     while (!myin1.eof())
     {
        myin1>>name;
        myin2>>roll;
        cout<<"Name -> "<<name<<" , "<<"Roll num. ->"<<roll<<endl;
     }
     
    
    return 0;
}