#include<stdio.h>
int nextPrime(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The next prime number is : %d.",nextPrime(num));
    return 0;
}
int nextPrime(int num)
{
    int count;
    num=num+1;
    while(num)
    {
        count=0;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            return num;
        }
        num+=1;
    }
}