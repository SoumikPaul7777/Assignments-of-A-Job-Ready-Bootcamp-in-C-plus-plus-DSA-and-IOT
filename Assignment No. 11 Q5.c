#include<stdio.h>
int findNPrime(int);
int main()
{
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    findNPrime(N);
    return 0;
}
int findNPrime(int N)
{
    int count,num=1;
    printf("First %d prime numbers will be :\n");
    for(int i=1;i<=N;)
    {
        count=0;
        num++;
        for(int j=2;j<=num/2;j++)
        {
            if(num%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",num);
            i++;
        }
    }
}