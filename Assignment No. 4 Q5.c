#include<stdio.h>
int main()
{
    printf("First 10 odd natural numbers in reverse order will be : \n");
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n",2*i-1);
    }
    return 0;
}