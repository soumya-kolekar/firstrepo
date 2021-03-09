//Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,a,b;
    printf("enter the n natural number\n");
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
        a=b*(b+1)/2;
    }
    printf("sum of all numbers is%d",a);

}