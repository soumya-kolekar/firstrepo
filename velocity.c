#include<stdio.h>
int main()
{
    float velm,velk;
    printf("enter the velocity in km/hr \n");
    scanf("%f",&velk);
    velm=velk*5/18;
    printf("the velocity in m/s is %f",velm);

    return 0;
}
