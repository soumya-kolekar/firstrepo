/*Write a function isPrime, which accepts an integer as parameter and returns 1 
if the number is prime and 0 otherwise.
 Use this function in main to display the first 10 prime numbers.*/
#include <stdio.h>
int checkPrimeNumber(int n);
int main()
{
    int  i=2,j=0 ,flag;
while(j!=10)
    {
        flag = checkPrimeNumber(i);
        if(flag == 1)
        {
            j++;
            printf("%d \n",i);
  }
  i++;  
    }
    return 0;
}
int checkPrimeNumber(int n)
{
    int j, flag = 1;
    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
