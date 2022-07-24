#include<stdio.h>
int main()
{
    int intialPoint,terminationPoint,count;
    printf("Enter the Initial Point : ");
    scanf("%d",&intialPoint);
    printf("Enter the Temination Point : ");
    scanf("%d",&terminationPoint);
    for(int i=intialPoint;i<=terminationPoint;i++)
    {
        count=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}