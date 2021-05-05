/*1.	Write a recursive function to calculate the nth
 Fibonacci number. Use this function in main to display 
 the first n Fibonacci numbers. The recursive definition 
 of nth Fibonacci number is as follows:
fib(n) = 1	if n = 1 or 2
  = fib(n-2) + fib(n-1)	if n>2
*/
#include <stdio.h>
int fib(int);
int main() 
{
    int n,c;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    c=fib(n);
    printf("Fibonacci Series: %d",c);
    return 0;
}
int fib(int a)
{  if( a==1 || a==2)
{
    return 1;
}
else{
return ((fib(a-2))+(fib(a-1)));
     
}}