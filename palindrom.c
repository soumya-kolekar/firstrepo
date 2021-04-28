#include<stdio.h>

int main()
{
    int n,i,j,a,r=0,rem;
    printf("enter the n numbers");
    scanf("%d",&a);
    n=a;
    printf("a = %d",a);
     printf("n = %d",n);
    while (a!=0) {
        rem = a % 10;
        r = r * 10 + rem;
        a /= 10;}
         printf("Reversed number = %d",r);
if(n==r)
{
        printf("palindrome");

}
else
{
        printf("no");
}
    
    return 0;
}
  