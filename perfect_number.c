#include <stdio.h>

int main()
{ int num, i ,sum=0; 
 printf("Enter a positive integer: ");
  scanf("%d", &num); 
  printf("Factors of %d are: ", num); 
  for (i = 1; i <num; i++) 
  { 
    
    if (num % i == 0) 
    { printf("%d ", i); 
      sum=sum+i;
    }
  
  } printf("%d",sum);
   
   if(sum==num)
   {printf("perfect");}
   else
   {printf("not perfect");}
  return 0; 
}
