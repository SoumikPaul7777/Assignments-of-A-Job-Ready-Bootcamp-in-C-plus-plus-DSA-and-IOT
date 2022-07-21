#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    num1==num2?printf("The number is : %d.\nBoth are same.",num1):num1>num2?printf("%d is greater number.",num1):printf("%d is greater number.",num2);
    return 0;
}