#include<stdio.h>
int fact(int);
int main()
{
    int rows,k,m;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        k=0;
        for(int j=1;j<=rows*2-1;j++)
        {
            m=0;
            if((j>=rows+1-i)&&(j<=rows-1+i)&&k==0)
            {
                k=1;
                printf("%d",fact(i-1)/(fact(m)*fact(i-1-m)));
                m++;
            }
            else
            {
                k=0;
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int fact(int n_r)
{
    int fact=1;
    for(int i=n_r;i>=2;i--)
    {
        fact*=i;
    }
    return fact;
}