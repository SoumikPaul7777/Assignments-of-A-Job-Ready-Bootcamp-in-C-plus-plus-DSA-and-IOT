#include<stdio.h>
void getPrimeBetweenTo(int,int);
int main()
{
    int lb,ub;
    printf("Enter the lower bound : ");
    scanf("%d",&lb);
    printf("Enter the upper bound : ");
    scanf("%d",&ub);
    getPrimeBetweenTo(lb,ub);
    return 0;
}
void getPrimeBetweenTo(int lb,int ub)
{
    int count;
    printf("Prime numbers between %d and %d is :\n",lb,ub);
    for(int i=lb;i<=ub;i++)
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
            printf("%d ",i);
        }
    }
}