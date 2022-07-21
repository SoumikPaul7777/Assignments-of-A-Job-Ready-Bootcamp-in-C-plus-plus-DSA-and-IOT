#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf("Enter 1st side of a triangle : ");
    scanf("%f",&side1);
    printf("Enter 2nd side of a triangle : ");
    scanf("%f",&side2);
    printf("Enter 3rd side of a triangle : ");
    scanf("%f",&side3);
    (side1+side2>side3)||(side2+side3>side1)||(side1+side3>side2)?printf("It is a Valid Triangle."):printf("It is Not a Valid Triangle");
    return 0;
}