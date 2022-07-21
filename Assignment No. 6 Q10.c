#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The reverse of %d is : ",num);
    while (num)
    {
        rev=rev*10+(num%10);
        num/=10;
    }
    printf("%d",rev);
    return 0;
}