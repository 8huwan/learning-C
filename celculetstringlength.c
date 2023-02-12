#include<stdio.h>
#include<string.h>
int main(){
char s[20];
int i;
printf("\n enter a string");
gets(s);    /*s==&s[20]*/
/*i=strlen(s);*/
for(i=0;s[i]!='\0';i++);
printf("lenth is %d",i);
}


