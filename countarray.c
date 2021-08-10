/* 
3.	Write a function, which accepts an integer array and an integer as 
parameters and counts the occurrences of the number in the array. 
Example: Input  1  5  2   1    6    3    8   2    9    15    1   30
			Number : 1 
Output: 1 occurs 3 times     

*/
#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],n,i;
    int num,count;
     
    printf("Enter total number of elements: ");
    scanf("%d",&n);
     
    //read array elements
    printf("Enter array elements:\n");
    for(i=0;i< n;i++)
    {
        
        scanf("%d",&arr[i]);
    }
     
    printf("Enter number to find Occurrence: ");
    scanf("%d",&num);
     
    //count occurance of num
    count=0;
    for(i=0;i< n;i++)
    {
        if(arr[i]==num)
            count++;
    }
    printf(" %d occurs %d times\n",num,count);
    return 0;
}