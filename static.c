#include<stdio.h>
void fun()
{
    static int i=10;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);

   
}
int main()
{
fun();
fun();
   
    return 0;
}
