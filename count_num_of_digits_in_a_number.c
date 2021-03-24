/*Write a C program to count number of digits in a number.*/
#include<stdio.h>
int main()
{ 
    int n,count=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n != 0)
    {
        n=n/10;
        count++;
    }
    printf("the number of digits in given number are %d",count);
    return 0;
}