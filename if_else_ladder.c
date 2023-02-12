#include<stdio.h>
int main()
{
    float percentage;
    printf("enter your percentage");
    scanf("%f",&percentage);
printf("%.2f",percentage);
    if (70<percentage)
    printf("FIRST DEVISION");
    else if(50<percentage)
    printf("SECOND DEVISION");
    else if(33<percentage)
    printf("THIRD DEVISION");
    else
    printf("SORRY YOU ARE FAIL");
    return 0;
}

