/*3.Write a C program to check whether a given number is positive or 
negative using Function concept. 
On screen: 
Input a number:15 
15 is a positive number*/
#include <stdio.h> 
int positive_or_negative(int);
int main() 
{ 
 int num,b; 
 printf("Input a number :"); 
 scanf("%d",&num); 
 positive_or_negative(num);
 return 0; 
} 
int positive_or_negative(int num)
{
     if (num>=0) 
 printf("%d is a positive number \n", num);
 else 
 printf("%d is a negative number \n", num);
 

}