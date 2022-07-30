#include<stdio.h>
float areaOfCircle(float);
int main()
{
    float radius;
    printf("Enter he radius : ");
    scanf("%f",&radius);
    printf("Area of Circle will be : %f.",areaOfCircle(radius));
    return 0;
}
float areaOfCircle(float radius)
{
    return (3.14f*radius*radius);
}