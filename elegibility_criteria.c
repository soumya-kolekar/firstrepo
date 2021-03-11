/*-------------------------------------------------------- 
2.Write a C program to find the eligibility of
admission for a professional
course based on 
the following criteria: 
Marks in Maths >=65 
Marks in Phy >=55 
Marks in Chem>=50 
Total in all three subject >=190 
or
Total in Math and Physics >=140 */
#include <stdio.h> 
int main() 
{ 
 int p,c,m,t,mp; 
 printf("Eligibility Criteria :\n"); 
 printf("Marks in Maths >=65\n"); 
 printf("and Marks in Phy >=55\n"); 
 printf("and Marks in Chem>=50\n"); 
 printf("and Total in all three subject >=190\n"); 
 printf("or Total in Maths and Physics >=140\n"); 
 printf("-------------------------------------\n");
 printf("Input the marks obtained in Physics :"); 
 scanf("%d",&p); 
 printf("Input the marks obtained in Chemistry :"); 
 scanf("%d",&c); 
 printf("Input the marks obtained in Mathematics :"); 
 scanf("%d",&m); 
 printf("Total marks of Maths, Physics and Chemistry : %d\n",m+p+c); 
 printf("Total marks of Maths and Physics : %d\n",m+p); 
 if (m>=65) 
 { printf("Marks in Maths >=65\n"); }
 if(p>=55) 
 { printf("and Marks in Phy >=55\n");}
 if(c>=50) 
 { "and Marks in Chem>=50\n";}
 if((m+p+c)>=190||(m+p)>=140) 
 { 
 printf("The candidate is eligible for admission.\n"); 
 } 
 else
 { 
 printf("The candidate is not eligible.\n"); 
 } 

 return 0; }