#include <stdio.h> 
#include<ctype.h>
int main() 
{ 
 char ch; 
 printf("Input any character : \n"); 
 scanf("%c",&ch); 
 
 if(isdigit(ch)){ 
 printf(" %c is a digit\n",ch); 
 } 
 else if(isupper(ch)) 
 { 
 printf("%c is an alphabet in uppercase.\n",ch); 
 } 
 else if(islower(ch))
 { 
 printf("%c is an alphabet in lowercase\n",ch); 
 } 
 else if(ispunct(ch)){ 
 printf(" %c is a symbol\n",ch); 
 } 
 else 
 { 
 printf("invalid character\n"); 
 } 
return 0; 
}