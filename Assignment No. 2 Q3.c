#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("Before Swapping : \n");
    printf("1st number will be : %d.\n",num1);
    printf("2nd number will be : %d.\n",num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After Swapping : \n");
    printf("1st number will be : %d.\n",num1);
    printf("2nd number will be : %d.\n",num2);
    return 0;
}