#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the digit : ");
    scanf("%d",&digit);
    printf("The updated number will be : %d.",num/10*10+digit);
    return 0;
}