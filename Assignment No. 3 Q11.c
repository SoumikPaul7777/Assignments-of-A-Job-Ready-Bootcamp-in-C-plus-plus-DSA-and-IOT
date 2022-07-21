#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks of 1st subject : ");
    scanf("%f",&sub1);
    printf("Enter the marks of 2nd subject : ");
    scanf("%f",&sub2);
    printf("Enter the marks of 3rd subject : ");
    scanf("%f",&sub3);
    printf("Enter the marks of 4th subject : ");
    scanf("%f",&sub4);
    printf("Enter the marks of 5th subject : ");
    scanf("%f",&sub5);
    sub1>=33&&sub2>=33&&sub3>=33&&sub4>=33&&sub5>=33?printf("He/She passed in all subjects."):printf("He/She might be fail in atleast one subject.");
    return 0;
}