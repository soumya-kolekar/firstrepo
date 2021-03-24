/*.Write a program in C accpet an N value and to display N natural 
numbers in Revers Order Using Function Concept. 
intput:7 
output:7 6 5 4 3 2 1 */
#include<stdio.h>
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
 for(i=num1;i>0;i--) 
 { 
 printf("%d\t",i); 
 } 

}