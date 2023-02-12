#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{int i;
cout<<setw(8)<<left<<"NUM"<<setw(8)<<left<<"SQR"<<setw(8)<<left<<"SQAROOT"<<setw(8)<<left<<"LOG"<<endl;
for(i=0;i<10;i++)
{ cout<<setw(8)<<left<<i;
  cout<<setw(8)<<left<<i*i;
  cout<<setw(8)<<left<<fixed<<setprecision(3)<<sqrt(i);
  cout<<setw(8)<<scientific<<setprecision(4)<<log(i)<<endl;


}
    return 0;
}