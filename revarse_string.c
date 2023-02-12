#include<stdio.h>
#include<string.h>
int main(){
char s[50],ch;
int l,i;
printf("enter a string\n");
gets(s);
//strrev(s);\\[use strrev fun with string.h to without any loops ]
for ( l = 0; s[l]; l++);
for(i=0;i<l/2;i++){
          ch=s[i];
 s[i]=s[l-1-i];
     s[l-1-i]=ch;}
printf("revarse string is\n%s",s);
}

