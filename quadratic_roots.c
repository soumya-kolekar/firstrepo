//9.Write a C program to calculate the root of a Quadratic Equation
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,delta,root,l,m;
    printf("enter the quadratic equation ax^2 + bx + c where,\n");
    printf("a =  \n");
    scanf("%lf",&a);
    printf("b =  \n");
    scanf("%lf",&b);
    printf("c =  \n");
    scanf("%lf",&c);
    delta=b*b-4*a*c;
    printf("the delta of the quadratic equation is %lf\n",delta);

    if(delta>0)
     {
        l=((-b)+(sqrt(delta)))/(2*a);
        m=((-b)-(sqrt(delta)))/(2*a);
        printf("the roots are\n %lf and %lf ",l,m);
     }
    else if(delta<0)
   {
        l= -b / (2 * a);
        m= sqrt(-delta) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", l, m, l, m);
    }
    else if(delta=0)
    {
        printf("the roots are \n%lf ",(-b)/(2*a));

    }
    return 0;
    

}

    
/* {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else 

    return 0;
}*/