#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    (num/2)*2==num?printf("It is an even number."):printf("It is a odd number.");
    return 0;
}