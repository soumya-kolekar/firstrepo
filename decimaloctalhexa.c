//5.	Write a program to accept a decimal number and 
//convert it to binary, octal and hexadecimal. Write separate functions.
#include<stdio.h>
int main()
{
    int a[20],n;  
    int accept(int a[20],int n);
    int display(int a[20],int n);
    int reverse(int a[20], int n);
    printf("How many numbers :");
scanf("%d", &n);
     accept(a,n);
     reverse(a,n);
    display(a,n);
    return 0;
}
int accept(int a[20], int n)
{
int i;
     for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}
 int display(int a[20],int n)
 { int i;
 printf("the reverse is:");
   for(i=0; i<n; i++)
	printf("%d", a[i]);
 }
 int reverse(int a[20], int n)
{ int i,j=0;
i=n-1;int temp;
  while(j<i)
  {
    
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
    j++;
    i--;
  }
  return 0;
 
}
