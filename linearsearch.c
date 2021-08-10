//	 Write a function for Linear Search, which accepts an array of n elements and a key as parameters
 //and returns the position of key in the array and -1 if the key is not found. Accept n numbers from the
 // user, store them in an array.Accept the key to be searched and search it using this function.
 // Display appropriate messages.
 #include<stdio.h>
 int main()
 {
     int key,a[100],n,i,m;
     int accept(int a[100],int n);
     int search(int a[100], int n,int key);
     
     
printf("How many numbers :");
scanf("%d", &n);
     accept(a,n);
     printf("enter the key ");
     scanf("%d",&key);
    m= search(a,n,key);
    printf("%d",m);
    return 0;
    
 } 
 int accept(int a[100], int n)
{
int i;
     for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
}
int search(int a[100], int n,int key)
 {int i;
     for (i=0;i<n;i++)
     {
        if(a[i]==key)
          { return i+1;}
        if(i==n){
                return -1;
             }       
     }}
    