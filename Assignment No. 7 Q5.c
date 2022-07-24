#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    for(int i=num1<num2?num1:num2;i>=1;i--)
    {
        if(num1%i==0&&num2%i==0)
        {
            if(i!=1)
            {
                printf("It is not a co-prime number.\nThe H.C.F of %d and %d is %d.",num1,num2,i);
                break;
            }
            else
            {
                printf("It is a co-prime number.\nThe H.C.F of %d and %d is %d.",num1,num2,i);
                break;
            }
        }
    }
    return 0;
}