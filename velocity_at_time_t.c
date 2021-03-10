#include<stdio.h>
int main()
{
    float u,v,a;
    int t;
    printf("enter the initial velocity (u) and acceleration (a) \n");
    scanf("%f%f",&u,&a);
    printf("enter the time (t) \n");
    scanf("%d",&t);
    v = u+a*t;
    printf("the value of velocity is %f",v);

    return 0;
}