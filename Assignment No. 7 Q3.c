#include<stdio.h>
int main()
{
    int num,a=-1,b=1,fibo;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num)
    {
        fibo=a+b;
        if(fibo==num)
        {
            printf("%d is present in the Fibonnaci Series.",fibo);
            break;
        }
        else if(num<fibo)
        {
            printf("%d is not present in the Fibonnaci Series.",num);
            break;
        }
        a=b;
        b=fibo;
    }
    return 0;
}