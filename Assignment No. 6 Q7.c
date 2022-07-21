#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The number digits in %d is : ",num);
    while (num)
    {
        count++;
        num/=10;
    }
    printf("%d",count);
    return 0;
}