#include<stdio.h>
int HCF(int,int);
int main()
{
    int num1,num2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("The HCF of %d and %d is : %d.",num1,num2,HCF(num1,num2));
    return 0;
}
int HCF(int num1,int num2)
{
    for(int i=num1<num2?num1:num2;i>=1;i--)
    {
        if(num1%i==0&&num2%i==0)
        {
            return i;
        }
    }
}