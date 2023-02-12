#include<iostream>
using namespace std;
class cwh{
protected:
string title;
int reting;
public:
cwh(string t,int r){
    title=t;
    reting=r;
}
//virtual void dishplay(){}
//pure virtual function 
//a abstrect class is,when we defind a pure virtual funcation in base class ,and the base class is calld abstrect base class
            
virtual void dishplay()=0;
}; 
class cwhvedio:public cwh{
 float vediolenth;
 public:
 cwhvedio(string t,int r,float vl): cwh (t ,r){
    vediolenth=vl;

 }  
  void dishplay(){
      cout<<"2---->thish is amesing vedio with title :"<<title<<endl;
      cout<<"reting is: "<<reting<<" * out of 10"<<endl;
      cout<<"vediolenth is : "<<vediolenth<<" min"<<endl;
 }
};
class cwhtext:public cwh{
 int words;
 public:
 cwhtext(string t,int r,int w): cwh (t ,r){
    words =w;

 }
 void dishplay(){
    cout<<"3---->thish is amesing text tuitorial with title :"<<title<<endl;
    cout<<"reting is: "<<reting<<" * out of 10"<<endl;
    cout<<"total words in the text is  is : "<<words<<" words"<<endl;
 }
};

int main()
{ 
string title;
int reting,words;
float vediolenth;
title="c++ tuitoril in hindi ";
reting=7;
vediolenth=53.17;
cwhvedio vedio(title,reting,vediolenth);
// vedio.dishplay();
title="c++ tuitoril text in esey leanguage ";
reting=9;
words=5317;
cwhtext text(title,reting,words);
// text.dishplay();

cwh *tuts[2];
tuts[0]=&vedio;
tuts[1]=&text;


tuts[0]->dishplay();
tuts[1]->dishplay();

    return 0;
}