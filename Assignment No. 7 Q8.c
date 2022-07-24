#include<stdio.h>
int main()
{
    int num,count,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The next prime number after %d is : ",num);
    num+=1;
    while (num)
    {
        count=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d",num);
            break;
        }
        else
        {
            num++;
        }
    }
    return 0;
}