#include<stdio.h>
#include<math.h>
int main()
{
    int r,a;
    const float pi=3.14;
    float area,c;
    printf("enter the radius of circle\n");
    scanf("%d",&r);
    a=r*r;
    c=2*pi*a;
    area=pi*a;
    printf("cirumference of the circle is %f ",c);
    printf("area of the circle is %f",area);
    return 0;

}