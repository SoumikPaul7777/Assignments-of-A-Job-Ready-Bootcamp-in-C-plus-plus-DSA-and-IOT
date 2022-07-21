#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    num%5==0?printf("It is divisible by 5."):printf("It is not divisible by 5.");
    return 0;
}