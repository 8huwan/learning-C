#include<stdio.h>
int main()
{
    int p,n;
float r,si;
    printf("enter principle amount\n");
    scanf("%d",&p);
    printf("enter number of year\n");
    scanf("%d",&n);
    printf("enter rate of intrest\n");
    scanf("%f",&r);

    si=p*n*r/100;
    printf("your simple intrest is=%.3f Rs",si);
    return 0;
    
    }
