#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        char k=65;
        for(int j=1;j<=rows*2-1;j++)
        {
            if((j>=i)&&(j<=rows*2-i))
            {
                printf("%c",k);
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