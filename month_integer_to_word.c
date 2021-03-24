/*3.Write a program in C to read any Month Number
 in integer and display Month name in the word*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
    int a;
    printf("write the Month Number\n");
    scanf("%d",&a);
    switch(a)
      {  case 1:
            printf("The month is Jan.");
            break;
        case 2:
            printf("The month is Feb.");
            break;
        case 3:
            printf("The month is Mar.");
            break;
        case 4:
            printf("The month is Apr.");
            break;
        case 5:
            printf("The month is May.");
            break;
        case 6:
            printf("The month is Jun.");
            break;
        case 7:
            printf("The month is Jul.");
            break;
        case 8:
            {printf("The month is Aug.");}
            break;
        case 9:
            printf("The month is Sep.");
            break;
        case 10:
            printf("The month is Oct.");
            break;
        case 11:
            printf("The month is Nov.");
            break;
        case 12:
            printf("The month is Dec.");
            break;
        default:
            printf("It is a Invalid Number.");
            break;
        
      }
    return 0;
 }