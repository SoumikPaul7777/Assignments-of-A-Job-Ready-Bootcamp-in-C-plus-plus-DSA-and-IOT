#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    (num&1)==1?printf("It is a odd number."):printf("It is an even number.");
    return 0;
}