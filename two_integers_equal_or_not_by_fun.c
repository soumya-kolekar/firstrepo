//.Write a C program to accept two integers and check whether they are equal or not. 
#include<stdio.h> 
void checkEqualNumber(int,int); 
int main() 
{ 
 int int1,int2; 
 printf("Input the values for Number1 and Number2 : "); 
 scanf("%d %d", &int1, &int2); 
 checkEqualNumber(int1,int2); 
 return 0; 
} 
void checkEqualNumber(int ino1,int ino2) 
{ 
 if(ino1==ino2) 
 printf("Number1 and Number2 are equal\n"); 
 else 
 printf("Number1 and Number2 are not equal\n"); 
} 
