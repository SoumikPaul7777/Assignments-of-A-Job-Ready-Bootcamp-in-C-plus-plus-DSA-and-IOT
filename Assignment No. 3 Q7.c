#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the quadratic equation (ax^2+bx+c=0) : ");
    scanf("%dx^2+%dx+%d=0",&a,&b,&c);
    D=b*b-4*a*c;
    D>0?printf("Roots are Real and Distinct."):D==0?printf("Roots are Real and Equal."):printf("Roots does not Exist or the Roots are imaginary.");
    return 0;
}