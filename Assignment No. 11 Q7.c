#include<stdio.h>
void findNTermsFibonacci(int);
int main()
{
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    findNTermsFibonacci(N);
    return 0;
}
void findNTermsFibonacci(int N)
{
    int a=-1,b=1,fibo;
    printf("First %d terms in fibonacci series :\n",N);
    for(int i=1;i<=N;i++)
    {
        fibo=a+b;
        printf("%d ",fibo);
        a=b;
        b=fibo;
    }
}