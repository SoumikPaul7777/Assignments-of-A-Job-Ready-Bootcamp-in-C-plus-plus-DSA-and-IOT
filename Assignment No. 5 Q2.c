#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("First %d natural numbers will be : \n",num);
    for(int i=1;i<=num;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}