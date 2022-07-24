#include<stdio.h>
int main()
{
    int sum,temp;
    printf("All Armstrong numbers under 1000 : \n");
    for(int i=1;i<=1000;i++)
    {
        temp=i;
        sum=0;
        while(temp)
        {
            sum+=((temp%10)*(temp%10)*(temp%10));
            temp/=10;
        }
        if(i==sum)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}