#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float avg,c;
    printf("Enter three numbers\n");
    scanf("%d%d%f",&a,&b,&c);
    avg=((a+b+c)/3);
    printf("the average of these three numbers are %f",avg);
    return 0;
}