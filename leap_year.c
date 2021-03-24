//Write a C program to find whether a given year is a leap year or not.

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter the year\n");
    scanf("%d",&a);
    b=a%4;
    if(b==0)
    printf("%d is a leap year",a);
    else
    printf("%d is a not leap year",a);
}