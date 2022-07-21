#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Factorial of a %d will be : ",num);
    for(;num>=1;num--)
    {
        fact=fact*num;
    }
    printf("%d",fact);
    return 0;
}