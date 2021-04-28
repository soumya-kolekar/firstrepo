/* Write a function isEven,which accepts an integer as parameter 
 and returns 1 if the number is even,and 0 otherwise. Use this function in main 
 to accept n numbers and check if they are even or odd.*/
#include<stdio.h> 
int checkEvenOdd(int); 
int main() 
{ 
 int num1,rem1; 
 printf("Input an integer : "); 
 scanf("%d",&num1); 
 rem1 = checkEvenOdd(num1); 
 if (rem1 == 1) 
 {printf("%d is an even integer\n",num1);}
 else {
printf("%d is an odd integer\n",num1);}
  
} 
int checkEvenOdd(int num1) 
{ 
if (num1 % 2 == 0)
{
return 1; 
} 
else 
{
return 0; 
}
}