//a-(a/b)*b
#include<stdio.h>
#include<math.h>
int main()
{
    int r,dividend,divisor,q,l,m,n;
    printf("enter the dividend\n");
    scanf("%d",&dividend);
    printf("enter the divisor\n");
    scanf("%d",&divisor);
    r=dividend-(dividend/divisor)*divisor;
    printf("remainder is%d\n",r);
    return 0;
}