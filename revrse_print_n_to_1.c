//Write a C program to print all natural numbers in reverse (from n to 1). 
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the n numbers");
    scanf("%d",&n);

    for (i=0;i<n; i++)
    
        {   j=n-i;
            printf("%d\n",j);
            }
    
    return 0;
}