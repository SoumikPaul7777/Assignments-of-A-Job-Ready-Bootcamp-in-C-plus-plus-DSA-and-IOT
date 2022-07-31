#include<stdio.h>
int terms(int);
int main()
{
    int N,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        sum+=terms(i);
    }
    printf("The sum is : %d.",sum);
    return 0;
}
int terms(int n)
{
    int fact=1;
    for(int i=n;i>=2;i--)
    {
        fact*=i;
    }
    return fact/n;
}