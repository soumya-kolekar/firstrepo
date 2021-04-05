//2.	Write a program to check whether given character is
 //digit or character in lowercase or uppercase.
//(Hint: ASCII values digit 48 to 58, 65 to 90 Uppercase and 97 to 122 Lowercase)
#include <stdio.h> 
int main() 
{ 
 char ch; 
 
 printf("Input any alphabet : \n"); 
 scanf("%c",&ch); 
 
 if(ch>=(int)48 && ch<=(int)57){ 
 printf(" %c is a digit\n",ch); 
 } 
 else if(ch>=(int)65 && ch<=(int)90) 
 { 
 printf("%c is an alphabet in uppercase.\n",ch); 
 } 
 else if(ch>=(int)97 && ch<=(int)122)
 { 
 printf("%c is an alphabet in lowercase\n",ch); 
 } 
 else 
 { 
 printf("invalid character\n"); 
 } 
return 0; 
}