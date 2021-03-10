#include<stdio.h>
#include<math.h>
int main()
{
    float f,c;
    printf("enter the temperature in fahrenheit\n");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("the temperature in celcius is %f\n",c);
    
}