#include<iostream>
#include<fstream>
using namespace std;

int main()

{  fstream data;
   // *opening files using constructors and writing it.*
   data.open("datamase.txt", ios::in);
     string st="bhuwan sharma";
  ofstream out("datamase.txt");
  out<<st;
  
      
//*opening files  using constructors and reading it*
string st2;
ifstream in("bhuwan1.txt");
getline(in,st2);
in>>st2;
cout<<st2;
    return 0;
}