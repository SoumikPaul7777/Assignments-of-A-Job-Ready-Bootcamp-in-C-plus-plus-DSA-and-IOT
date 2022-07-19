#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The unit digit of %d will be %d.",num,num%10);
    return 0;
}