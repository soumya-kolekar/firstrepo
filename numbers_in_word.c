//1.	write a program which accepts a number n and display each digit in word. 
//(Hint : Reverse the number and use switch statement.)
//Ex. Number=6702 Output : Six Seven Zero Two

#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem=0,digit;

printf("Enter number=");
scanf("%d",&n);
 digit=(int)log10(n);
printf("Output :");

while(n!=0)
{
rem=(rem*10)+(n%10);
n=n/10;
}
digit=digit-((int)log10(rem));

while(rem!=0)
{
digit=rem%10;



   switch(rem%10)
   {
	 case 0:
	       printf("Zero\t");
	 break;
 
	 case 1:
	       printf("one\t");
	 break;
	 case 2:
	       printf("Two\t");
	 break;
	 case 3:
	       printf("Three\t");
	 break;
	 case 4:
	       printf("Four\t");
	 break;
	 case 5:
	       printf("Five\t");
     break;
     case 6:
	       printf("Six\t");
	 break;
	 case 7:
	       printf("Seven\t");
	 break;
	 case 8:
	       printf("Eight\t");
	 break;
	 case 9:
	       printf("Nine\t");
	 break;
	
}

rem/=10;
}

return 0;}


