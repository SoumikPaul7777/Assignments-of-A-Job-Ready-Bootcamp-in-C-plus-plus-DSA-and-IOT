#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        int k=1;
        for(int j=1;j<=rows*2-1;j++)
        {
            if((j>=rows+1-i)&&(j<=rows-1+i))
            {
                printf("%d",k);
                if(j<(rows*2-1)/2+1)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}