#include<stdio.h>
float simpleInterest(float,float,float);
int main()
{
    float pa,rate,time;
    printf("Enter the principle amount : ");
    scanf("%f",&pa);
    printf("Enter the rate : ");
    scanf("%f",&rate);
    printf("Enter the time : ");
    scanf("%f",&time);
    printf("The simple interest will be : %f.",simpleInterest(pa,rate,time));
}
float simpleInterest(float pa,float rate,float time)
{
    return (pa*rate*time/100.00f);
}