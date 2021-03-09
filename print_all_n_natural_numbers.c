//Write a C program to print all natural numbers from 1 to n.
#include<stdio.h>
int main()
{
    int n,k;
    printf("enter the n numbers\n");
    scanf("%d",&n);
    printf("the list of all natural numbers are\n");
    for(k=1;k<=n;k++)
    {
        printf("%d\n",k);
    }
    return 0;
}