//write a program which accept number from 
//user and print even factors of that no.
//input:24
//output: 1 2 4 6 8 12
#include<stdio.h>
void displayfact(int ino)
{
    int i=0;
    for(i=1;i<=10;i++)
    {
        if (ino%i==0)
        {
           printf("%d\t",i);
        }
        
    }
}
int main()
{
    int ino=0;
    printf("\nenter the number:");
    scanf("%d",&ino);
    displayfact(ino);
    return 0;
}