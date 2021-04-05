/* 4.	Write a program, which accepts annual basic salary of an employee and calculate and
 display the Income tax as per the following rules.
Basic:  <1,50,000                                    Tax=0
    	1,50,000 to 3,00,000                        Tax=20%
    	>3,00,000                                   Tax=30%
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float c,m;
    printf("enter the annual basic salary \n");
    scanf("%f",&c);
    
    if(c<=150000)
    {
        printf("%.2f is not taxable",c);
    }
    else if(c>150000 && c<=300000 )
    {
        printf("tax=%.2f",0.2*c);
    }
    else if(c>300000)
    {
        printf("tax=%.2f",0.3*c);
    }
    else
    {
        printf("\n enter valid salary");
    }
    return 0;
}

  


