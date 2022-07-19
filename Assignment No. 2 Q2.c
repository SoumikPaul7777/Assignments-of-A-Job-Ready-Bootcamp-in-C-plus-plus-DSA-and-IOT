#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The number without its last digit will be : %d.",num/10);
    return 0;
}