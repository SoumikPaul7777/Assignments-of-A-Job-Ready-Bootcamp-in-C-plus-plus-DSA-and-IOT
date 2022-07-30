#include<stdio.h>
int checkContainsDigit(int,int);
int main()
{
    int num,digit;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the digit : ");
    scanf("%d",&digit);
    checkContainsDigit(num,digit)?printf("%d contains in %d.",digit,num):printf("%d not contains in %d.",digit,num);
    return 0;
}
int checkContainsDigit(int num,int digit)
{
    while(num)
    {
        if(digit==num%10)
        {
            return 1;
        }
        num/=10;
    }
    return 0;
}