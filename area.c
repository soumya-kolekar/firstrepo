 /*Write a program having following menu options and corresponding actions. 
1.	Area of Square           2  Area of Rectangle      3. Area of Triangle
*/
#include <stdio.h> 
int main () 
{ 
 int choice,r,l,w,b,h; 
 float area; 
 printf("Input 1 for area of square\n"); 
 printf("Input 2 for area of rectangle\n"); 
 printf("Input 3 for area of triangle\n"); 
 printf("Input your choice : "); 
 scanf("%d",&choice); 
 switch(choice) 
 { 
     case 1: 
          printf("Input side of the square : ");  
          scanf("%d",&r); 
          area=r*r; 
     break; 
    case 2: 
             printf("Input length and width of the rectangle : "); 
             scanf("%d%d",&l,&w); 
             area=l*w; 
     break; 
    case 3: 
            printf("Input the base and hight of the triangle :"); 
             scanf("%d%d",&b,&h); 
             area=.5*b*h; 
     break; 
 } 
 printf("The area is : %f\n",area); 
} 