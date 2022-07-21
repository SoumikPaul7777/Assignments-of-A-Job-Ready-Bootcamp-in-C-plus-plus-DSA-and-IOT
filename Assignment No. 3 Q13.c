#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    num%3==0&&num%2==0?printf("It is divisible by 3 and divisible by 2 as well."):printf("It is either not divisible by 3 or not divisible by 2 or by both as well.");
    return 0;
}