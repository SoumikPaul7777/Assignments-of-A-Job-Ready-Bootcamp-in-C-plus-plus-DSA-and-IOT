#include<stdio.h>
int main()
{
    int num,sum=0,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    while(temp)
    {
        sum+=((temp%10)*(temp%10)*(temp%10));
        temp/=10;
    }
    num==sum?printf("%d is a Armstrong Number.",num):printf("%d is not a Armstrong Number.",num);
    return 0;
}