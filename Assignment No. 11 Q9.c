#include<stdio.h>
int squareNumber(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Square of %d is : %d.",num,squareNumber(num));
    return 0;
}
int squareNumber(int num)
{
    return num*num;
}