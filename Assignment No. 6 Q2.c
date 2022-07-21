#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Sum of first %d Even Natural Numbers will be : ",num);
    for(int i=1;i<=num;i++)
    {
        sum+=(2*i);
    }
    printf("%d",sum);
    return 0;
}