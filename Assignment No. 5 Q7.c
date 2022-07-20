#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("First %d even natural numbers in reverse order will be : \n",num);
    for(int i=num;i>=1;i--)
    {
        printf("%d\n",2*i);
    }
    return 0;
}