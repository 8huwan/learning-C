#include<stdio.h>
#include<conio.h>
int main(){
char s[50],ch;
int l,i;
printf("enter a string");
gets(s);
l=0;
while(s[l])
{
    l++;
}
for(i=0;i<l/2;i++){
    ch=s[i];
    s[i]=s[l-1-i]; 
    s[l-1-i]=ch;
}
printf("reverse string is %s",s);
getch();

}