#include<stdio.h>
int checkPrime(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    checkPrime(num)?printf("%d is a prime number.",num):printf("%d is not a prime number.",num);
    return 0;
}
int checkPrime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}