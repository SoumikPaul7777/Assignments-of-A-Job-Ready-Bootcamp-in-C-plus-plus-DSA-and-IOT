#include<stdio.h>
void firstNOddNaturalNumbers(int);
int main()
{
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    firstNOddNaturalNumbers(N);
    return 0;
}
void firstNOddNaturalNumbers(int N)
{
    printf("First %d Odd Natural Numbers : \n",N);
    for(int i=1;i<=N;i++)
    {
        printf("%d ",2*i-1);
    }
}