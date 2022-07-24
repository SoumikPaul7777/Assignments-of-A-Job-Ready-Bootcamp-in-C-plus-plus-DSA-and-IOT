#include<stdio.h>
int main()
{
    int count;
    printf("All Prime numbers under 100 will be : \n");
    for(int i=2;i<=99;i++)
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