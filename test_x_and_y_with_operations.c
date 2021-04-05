/*	Accept two numbers in variables X and Y from the user and perform the following operation.
Options	Actions
1.	Equality	                Check if X is equal to Y.
2.	Less Than	                Check if X is less than Y.
3.	Quotient and Reminder   	Divide X by Y. Display Quotient and Reminder. 
4.	Range	                    Accept a number and check if  it lies between X and Y. 
5.	Swap                    	Interchange X and Y.
*/
#include <stdio.h> 
int main () 
{ 
 int x,y,choice,c,d; 
 float a,b,m,n;
printf("Input two numbers: \n"); 
printf("Input x: "); 
 scanf("%d",&x);
 printf("Input y: "); 
 scanf("%d",&y);
 
 printf("Input the values as following\n"); 
 printf("1.	Equality	                Check if X is equal to Y.\n"); 
 printf("2.	Less Than	                Check if X is less than Y.\n"); 
 printf("3.     Quotient and Reminder     	Divide X by Y. Display Quotient and Reminder.\n"); 
 printf("4.	Range	                    Accept a number and check if  it lies between X and Y.\n"); 
 printf("5.	Swap                    	Interchange X and Y.\n"); 
 printf("Input your choice : "); 
 scanf("%d",&choice); 
 switch(choice) 
 { 
     case 1: 
        if(x==y)
        {
            printf("the numbers are equal");
        }
        else
        {
                printf("the numbers are not eual");
        }
     break; 
     case 2: 
               if(x<=y)
        {
               printf("the number x is less than y");
        }
        else
        {
               printf("the number y is lees than x");
        };  
     break;
    case 3: 
            a=x/y;
            b=x%y;
             printf(" Quotiont of %d & %d is: %f\n Remainder of %d & %d is: %f ",x,y,a,x,y,b);

    break; 
    case 4:
        
        printf("enter any number");
        scanf("%d",&c);

               if(c>=x && c<=y)
        {
            printf("it is in the range of given x and y.");
        }
        else
        {
            printf("it is not in the range of given x and y.");    }
     break; 
    case 5:
                
                d=x;
                x=y;
                y=d;
            printf("the numbers are equal to\n x=%d \n y=%d",x,y);
        
        
    break; 
  
 } 
} 
