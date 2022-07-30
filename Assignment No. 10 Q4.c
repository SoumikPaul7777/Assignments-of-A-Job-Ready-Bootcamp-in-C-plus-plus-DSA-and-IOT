#include<stdio.h>
void firstNNaturalNumbers(int);
int main()
{
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    firstNNaturalNumbers(N);
    return 0;
}
void firstNNaturalNumbers(int N)
{
    printf("First %d Natural Numbers : \n",N);
    for(int i=1;i<=N;i++)
    {
        printf("%d ",i);
    }
}