#include<stdio.h>
void getPrimeFactors(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    getPrimeFactors(num);
    return 0;
}
void getPrimeFactors(int num)
{
    int i=2;
    printf("The prime factors of %d is :\n",num);
    while(num!=1)
    {
        if(num%i==0)
        {
            printf("%d ",i);
            num/=i;
        }
        else
        {
            i++;
        }
    }
}