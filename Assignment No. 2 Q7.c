#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num)
    {
        count++;
        if((num&1)==1)
        {
            break;
        }
        num=num>>1;
    }
    printf("The position of first 1 from LSB side will be : %d.",count);
    return 0;
}