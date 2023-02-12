#include<stdio.h>
int main()
{
int i=1,choice,a,b,s;
while(i<=10)
{
printf("\n1.addition");
printf("\n2.odd even");
printf("\n3.printing n number");
  
printf("\nenter your choice");
scanf("%d",&choice);

switch (choice)
{
    case 1:
            printf("enter two number");
            scanf("%d%d",&a,&b);
            s=a+b;
            printf("\n sum is %d",s);
            break;
    case 2:
            printf("enter your number");
            scanf("%d",&a);

            if(a%2==0)
            printf("even number");
            else
            printf("odd number");
            break;
    case 3:
            printf("enter n number");
            scanf("%d",&a);
             for(b=1;b<=a;b++)
             printf("%d",b);
             break;
    default:
            printf("invalid choice");


           return 0;

}
}
}