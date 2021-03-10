#include <stdio.h> 
#include<math.h>
 int main() 
{ 
 int vote_age,b,a=18; 
 printf("Input the age of the candidate : "); 
 scanf("%d",&vote_age); 
 b=a-vote_age;
 if (vote_age<=a) 
 { 
 printf("Sorry, You are not eligible to caste your vote.\n"); 
 printf("You would be able to caste your vote after %d year.\n",b); 
 } 
 else 
 { 
 printf("Congratulation! You are eligible for casting your vote.\n"); 
 } 
 return 0; 
} 