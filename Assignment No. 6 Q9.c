#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    for(int i=num1>num2?num1:num2;i<=num1*num2;i=i+(num1>num2?num1:num2))
    {
        if(i%num1==0&&i%num2==0)
        {
            printf("L.C.M of %d and %d is %d.",num1,num2,i);
            break;
        }
    }
    return 0;
}