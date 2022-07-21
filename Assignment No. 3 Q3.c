#include<stdio.h>
int main()
{
    int num;
    printf("Entet the number : ");
    scanf("%d",&num);
    num%2==0?printf("It is even number."):printf("It is odd number.");
    return 0;
}