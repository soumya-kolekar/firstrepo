/*4.Write a program in C accpet an N value and to display N natural 
numbers.
intput:7 
output:1 2 3 4 5 6 7*/ 
#include<stdio.h> 
void Display(int); 
int main() 
{ 
 int num1,rem1; 
 printf("Input an integer : "); 
 scanf("%d",&num1); 
 Display(num1); 
 return 0; 
} 
void Display(int num1) 
{ 
 int i; 
 for(i=1;i<=num1;i++) 
 { 
 printf("%d\t",i); 
 } 

} 


  