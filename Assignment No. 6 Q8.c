#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d is a Composite Number.",num);
            return 0;
        }
    }
    printf("%d is a Prime Number.",num);
    return 0;
}