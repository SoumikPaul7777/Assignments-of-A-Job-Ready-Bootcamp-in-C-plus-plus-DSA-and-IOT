#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("H.C.F of %d and %d is : ",num1,num2);
    for(int i=num1<num2?num1:num2;i>=1;i--)
    {
        if(num1%i==0&&num2%i==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}