#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the any alphabet : ");
    scanf("%c",&ch);
    ch>=65&&ch<=90?printf("It is in Uppercase."):printf("It is in Lowercase.");
    return 0;
}