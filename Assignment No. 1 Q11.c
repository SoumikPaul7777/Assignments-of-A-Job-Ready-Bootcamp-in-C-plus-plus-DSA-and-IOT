#include<stdio.h>
int main()
{
    int hh,mm;
    printf("Enter the time (HH:MM) : ");
    scanf("%d:%d",&hh,&mm);
    printf("%d hour and %d minute",hh,mm);
    return 0;
}