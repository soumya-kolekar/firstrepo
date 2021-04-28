#include<stdio.h>
int main()
{ int a=10;// life full house
    {
        int a=20;//life only this room
        printf("\n inside the block a=%d",a);
 
    }

    printf("\n inside the main a=%d",a);
    return 0;
}