#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("Enter the 3rd number : ");
    scanf("%d",&num3);
    num1>num2&&num1>num3?printf("%d is Greater.",num1):num2>num1&&num2>num3?printf("%d is Greater.",num2):num3>num1&&num3>num2?printf("%d is Greater.",num3):printf("Greatest number appears two or three times.");
    return 0;
}