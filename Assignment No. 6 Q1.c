#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Sum of %d Natural Numbers will be : ",num);
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}