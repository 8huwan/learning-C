#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[50];
    fstream f;
    f.open("file.TXT" ,ios::in);
    // cout<<"enter data"<<endl;
    // cin>>str;
    f>>str;
    cout<<str;
    f.close();
    return 0;
}