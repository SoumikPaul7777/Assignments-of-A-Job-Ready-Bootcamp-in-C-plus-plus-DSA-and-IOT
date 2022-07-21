#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    num>=100&&num<=999?printf("It is a three digit number."):printf("It is not a three digit number.");
    return 0;
}