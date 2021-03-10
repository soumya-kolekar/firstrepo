//i= p*roi*t/100;
//amt=p+i
#include<stdio.h>
#include<math.h>
int main()
{
    float roi,amt,i;
    int t,p;
    printf("enter the rate of interst\n");
    scanf("%f",&roi);
    printf("enter the time required\n");
    scanf("%d",&t);
    printf("enter the principle\n");
    scanf("%d",&p);
    i= p*roi*t/100;
    amt=p+i;
    printf("simple interset is %f \n",i);
    printf("maturity amount is %f\n",amt);
    return 0;

}