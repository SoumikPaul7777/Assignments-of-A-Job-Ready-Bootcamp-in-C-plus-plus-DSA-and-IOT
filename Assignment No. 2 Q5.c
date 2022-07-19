#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num)
    {
        count=count+(num%10);
        num/=10;
    }
    printf("The sum of digits will be : %d.",count);
    return 0;
}