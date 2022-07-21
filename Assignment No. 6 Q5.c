#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Sum of Cubes of first %d Natural Numbers will be : ",num);
    for(int i=1;i<=num;i++)
    {
        sum+=(i*i*i);
    }
    printf("%d",sum);
    return 0;
}