/*Write a function that accepts a character
as parameter and returns 1 if it is an
alphabet, 2 if it is a digit and 3 is it
is a special symbol. In main, accept 
characters till the user enters EOf and use 
the function to count the total number of 
alphabets,digits and special symbols entered.*/
#include <stdio.h>
#include <string.h>

void stringcount(char *s)
{
 int i,alphabets=0,digits=0,specialcharacters=0;
 for(i=0;s[i];i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alphabets++;
        else if(s[i]>=48 && s[i]<=57)
         digits++;
        else
         specialcharacters++;
    }
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialcharacters);
}

int main()

{
    char s[1000];  
    printf("Enter  the string: ");
    gets(s);
    stringcount(s);

}