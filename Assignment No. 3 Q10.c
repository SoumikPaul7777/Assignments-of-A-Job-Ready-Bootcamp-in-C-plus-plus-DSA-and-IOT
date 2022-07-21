#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter the cost price of a product : ");
    scanf("%d",&cp);
    printf("Enter the selling price of a product : ");
    scanf("%d",&sp);
    printf("Profit and Loss pertage is : %f%%.",((sp>cp?sp-cp:cp-sp)/cp)*100);
    return 0;
}