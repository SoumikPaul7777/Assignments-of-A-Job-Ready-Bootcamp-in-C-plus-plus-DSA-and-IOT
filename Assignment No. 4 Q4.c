#include<stdio.h>
int main()
{
    printf("First 10 odd natural numbers will be : \n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d\n",2*i-1);
    }
    return 0;
}