#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    num%7==0||num%3==0?printf("It is divisible by 7 or divisible by 3."):printf("It is either not divisible by 7 or not divisible by 3 or by both as well.");
    return 0;
}