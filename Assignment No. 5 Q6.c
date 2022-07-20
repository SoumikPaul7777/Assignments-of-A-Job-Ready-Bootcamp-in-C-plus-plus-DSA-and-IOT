#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("First %d even natural numbers will be : \n",num);
    for(int i=1;i<=num;i++)
    {
        printf("%d\n",2*i);
    }
    return 0;
}