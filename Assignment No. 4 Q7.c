#include<stdio.h>
int main()
{
    printf("First 10 even natural numbers in reverse order will be : \n");
    for(int i=10;i>=1;i--)
    {
        printf("%d\n",2*i);
    }
    return 0;
}