#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    num>0?printf("It is positive."):printf("It is non-positive.");
    return 0;
}