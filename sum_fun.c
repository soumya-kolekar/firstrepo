// 1.	Write a recursive C function to calculate
//  the sum of digits of a number. 
//  Use this function in main to accept 
// a number and print sum of its digits. 
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("enter the n natural number\n");
    scanf("%d",&n);
    int a=sum(n);
    
    printf("sum of all numbers is%d",a);

}
int sum(int n)
{ 
   int s=0,i;
    for(i=0;i<=n;i++)
    {s=s+i;}
   return s;
}