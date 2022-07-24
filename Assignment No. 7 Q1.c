#include<stdio.h>
int main()
{
    int N,count=1,a=-1,b=1,fibo;
    printf("Enter the Nth term of a Fibonnaci Series : ");
    scanf("%d",&N);
    printf("The %d(st/nd/rd/th) term of a Fibonnaci Series : ",N);
    while(N)
    {
        fibo=a+b;
        if(count==N)
        {
            printf("%d",fibo);
            break;
        }
        a=b;
        b=fibo;
        count++;
    }
    return 0;
}