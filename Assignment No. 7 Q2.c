#include<stdio.h>
int main()
{
    int n,a=-1,b=1,fibo;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("First %d terms of Fibonacci series is : \n",n);
    for(int i=1;i<=n;i++)
    {
        fibo=a+b;
        printf("%d  ",fibo);
        a=b;
        b=fibo;
    }
    return 0;
}