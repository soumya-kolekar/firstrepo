//Write a C program that converts kilometers per hour to miles per hour. 
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("enter the speed in km/he \n");
    scanf("%f",&a);
    b = a * 0.6213712;
	printf("The speed will be %f miles per hour\n",b);

    return 0;

}

	
