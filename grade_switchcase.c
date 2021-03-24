/*3.Write a program in C to accept a grade and display the equivalent 
description: 
[ note: using if else write a program] 
Grade Description 
E Excellent 
V Very Good 
G Good 
A Average 
F Fail */
#include <stdio.h> 
int main() 
{ 
 char grd; 
 
 printf("Input the grade :"); 
 scanf("%c",&grd); 
 switch(grd) 
 { 
 case 'E': 
 printf(" Excellent"); 
 break; 
 case 'V': 
 printf(" Very Good"); 
 break;
 case 'G': 
 printf(" Good "); 
 break; 
 case 'A': 
 printf(" Average"); 
 break; 
 case 'F': 
 printf(" Fails\n"); 
 break; 
 default : 
 printf("Invalid Grade Found. \n"); 
 break; 
 } 
} 