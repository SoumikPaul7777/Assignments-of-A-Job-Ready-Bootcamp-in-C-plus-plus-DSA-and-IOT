#include<stdio.h>
int checkEvenOdd(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    checkEvenOdd(num)?printf("%d is an even number.",num):printf("%d is a odd number.",num);
}
int checkEvenOdd(int num)
{
    return (num%2==0?1:0);
}