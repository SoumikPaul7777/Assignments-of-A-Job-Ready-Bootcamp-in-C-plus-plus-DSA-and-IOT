#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    num>0?printf("%d number is Positive.",num):num<0?printf("%d number is Negative.",num):printf("It is Zero.");
    return 0;
}