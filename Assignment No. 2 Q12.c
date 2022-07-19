#include<stdio.h>
int main()
{
    float inr;
    printf("Enter the amount in INR : ");
    scanf("%f",&inr);
    printf("The equivalent amount in USD is : %f.",1.0f/76.23f*inr);
    return 0;
}