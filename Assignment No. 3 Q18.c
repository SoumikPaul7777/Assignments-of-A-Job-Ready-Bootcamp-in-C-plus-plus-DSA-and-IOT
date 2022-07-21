#include<stdio.h>
int main()
{
    int monthNo;
    printf("Enter the month number : ");
    scanf("%d",&monthNo);
    monthNo==1||monthNo==3||monthNo==5||monthNo==7||monthNo==8||monthNo==10||monthNo==12?printf("It has 31 days."):printf("It has 30 days.");
    return 0;
}