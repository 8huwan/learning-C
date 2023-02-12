#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    printf("press 1 for addition\n press 2 for subtrect\n press 3 for multiplication\n press 4 for devide\n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("%d",a+b);
    } 
    if(c==2)
    {
        printf("%d",a-b);
    }          
    if(c==3)
    {
        printf("%d",a*b);
    
    }
    if(c==4)
    {
        printf("%d",a/b);
    }
    return 0;
}