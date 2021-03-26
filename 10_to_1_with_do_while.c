//4.Write a program in C to display the 10 to 1 natural numbers. 
//output:10 9 8 7 6 5 4 3 2 1 
#include<stdio.h>
int main() 
{ 
 int i=10; 
 printf("The 10 to 1 natural numbers are:\n"); 
do
{
     printf("%d ",i); 
     i--;
    /* code */
}
while (i>=1/* condition */);
 printf("\n",i);
 return 0; 
}
