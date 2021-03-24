/*2.Write a C program to calculate profit and loss on a transaction. 
Input Cost Price: 500 
Input Selling Price: 700 
 
You can booked your profit amount : 200 
Input Cost Price: 500 
Input Selling Price: 200 
 
You got a loss of amount : 300 */
#include <stdio.h> 
int main() 
{ 
 int cprice,sprice, plamt; 
 //cprice is Cost Price and sprice is Selling Price, plamt denotes total profit/loss 
 printf("Input Cost Price: "); 
 scanf("%d",&cprice); 
 printf("Input Selling Price: "); 
 scanf("%d",&sprice); 
 
 if(sprice>cprice) //calculate profit 
 { 
 plamt = sprice-cprice; 
 printf("\nYou can booked your profit amount : %d\n", plamt); 
 } 
 else if(cprice>sprice) //calculate loss 
 { 
 plamt = cprice-sprice; 
 printf("\nYou got a loss of amount : %d\n", plamt);  } 
 else //No Profit No Loss 
 { 
 printf("\nYou are running in no profit no loss condition.\n"); 
 } 
} 