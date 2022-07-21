#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    ch>=65&&ch<=90?printf("%c is in Uppercase.",ch):ch>=97&&ch<=122?printf("%c is in Lowercase.",ch):ch>=48&&ch<=57?printf("%c is a Digit.",ch):printf("%c is a Special Character.");
    return 0;
}