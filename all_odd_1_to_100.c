//Write a C program to print all odd number between 1 to 100.
#include<stdio.h>
int main()
{
 int n,a;

    for(n=1;n<=100;n++)
    {a=n%2;
    if(a!=0)
    printf("the even nos are%d\n",n);}
    return 0;

}