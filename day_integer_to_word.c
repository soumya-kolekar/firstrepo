/*3.Write a program in C to read any Day Number
 in integer and display Day name in the word*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
    int a;
    printf("write the Day Number\n");
    scanf("%d",&a);
    switch(a)
      {  case 1:
            printf("The Day is Monday.");
            break;
        case 2:
            printf("The Day is Tuesday.");
            break;
        case 3:
            printf("The Day is Wednesday.");
            break;
        case 4:
            printf("The Day is Thursday.");
            break;
        case 5:
           printf("The Day is Friday.");
            break;
        case 6:
            printf("The Day is Saturday.");
            break;
        case 7:
            printf("The Day is Sunday.");
            break;
        default:
            printf("It is a Invalid Number.");
            break;
        
      }
    return 0;
 }