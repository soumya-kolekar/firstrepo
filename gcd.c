/*6.	Write a recursive C function to calculate
 the GCD of two numbers. Use this function in main. 

The GCD is calculated as :

	gcd(a,b) = a	if b = 0

	  			=gcd (b, a mod b) otherwise 
*/
#include<stdio.h>
int gcd(int,int);
int main()
{
    int l,m,c,a,b;
    printf("enter two number\n");
    scanf("%d%d",&l,&m);
    c=gcd(l,m);
    printf("gcd of given numbers id %d",c);
    return 0;
}
int gcd(int a,int b)
{
    int r;
  
    if(b==0)
    {   
         return a;}
    else
    {  r=a%b;
        return gcd(b,r);
    }
}