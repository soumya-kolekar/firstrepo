#include<stdio.h>
int main()
{
    int a=1,b=0,c=5;
    if(a<b)
    {  if(a<c)
        printf("a is min");
        else
        printf("c is min");
    }
    else
    {
        if(b<c)
        printf("b is min");
        else
        printf("c id min");
    }return 0;
}