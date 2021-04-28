#include<stdio.h>
#include<math.h>


int main()
{
    int r,c;
    printf("enter the range of the multipication table :\n");
    scanf("%d%d",&r,&c);
    printf("the multipication table is from %d to %d :\n",r,c);

     int i,j,a,l,b;
   
         for(i=1;i<=10;i++)
    { for(j=r;j<=c;j++)
    {   l=i*j;
    
        printf("%d x %d =%d \t",j,i,l);
    }
        printf("\n");
    }
    
    return 0;
}
