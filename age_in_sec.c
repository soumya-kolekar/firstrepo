#include<stdio.h>
#include<math.h>
int main()
{
    float age_in_sec,a;
    int age;
    printf("enter the age in years\n");
    scanf("%d",&age);
    a=10*10*10*10*10*10*10;
    age_in_sec=3.156*a*age;
    printf("age in seconds is %f",age_in_sec);
    return 0;

}