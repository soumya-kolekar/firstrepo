/*3.	Write a program to accept marks of three subject. 
Calculate the average and also display the class obtained. */
#include<stdio.h>
#include<math.h>
int main()
{
    int p,m;
    float avg,c;
    printf("enter the marks of maths\n");
    scanf("%d",&m);
    printf("enter the marks of physics\n");
    scanf("%d",&p);
    printf("enter the marks of chemistry\n");
    scanf("%f",&c);
    avg=((p+c+m)/3);
    printf("the average marks are  %.2f \n ",avg);
     printf(" class:");
    if(avg>=75)
    {
        printf("\n DISTINCTION");
    }
     else if(avg>=60)
    {
        printf("\n FIRST CLASS");
    }
     else if(avg>=50)
    {
        printf("\n SECOND CLASS");
    }
     else
    {
        printf("\n NOT PASSED");
    }
    return 0;
}