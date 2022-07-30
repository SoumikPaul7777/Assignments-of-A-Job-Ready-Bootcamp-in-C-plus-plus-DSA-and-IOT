#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The factorial of %d is : %d.",num,factorial(num));
    return 0;
}
int factorial(int num)
{
    int fact=1;
    for(;num>=1;num--)
    {
        fact*=num;
    }
    return fact;
}