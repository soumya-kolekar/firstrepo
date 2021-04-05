/*Write a program, which accepts two integers and an operator
 as a character(+,-,*,/ performs         
 corresponding operation and displays the result	*/
 #include<stdio.h> 
int main() 
{ 
 int num1,num2,opt,a;
 printf("Enter the first Integer :"); 
 scanf("%d",&num1); 
 printf("Enter the second Integer :"); 
 scanf("%d",&num2); 
 printf("\nInput your option :\n"); 

 printf("1-Addition.\n2-Substraction((-).\n3-Multiplication(*).\n4-Division(/). \n5-Exit.\n");  
  scanf("%d",&opt); 
 switch(opt) { 
 case 1: 
 {
    a=num1+num2;
     printf("Addition is %d",a);
 }//code 
 break; 
 
 case 2: 
 {
    a=num1-num2;
     printf("Substraction is %d",a);
 }
 //code 
 break; 
 case 3: 
 {
    a=num1*num2;
     printf("Multiplication is %d",a);
 }
 //code 
 break; 
 
 case 4: 
 {
    
    a=num1/num2;
     printf("Division is %d",a);
 }
 break; 
 
 case 5: 
 {
     printf("Exit");
 }
 break; 
 
 default: 
 printf("Input correct option\n"); 
 break; 
 } 
} 