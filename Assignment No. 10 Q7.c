#include<stdio.h>
int fact(int);
int main()
{
    int n,r;
    printf("Total number of Objects : ");
    scanf("%d",&n);
    printf("Number of Objects selected : ");
    scanf("%d",&r);
    printf("Number of combinations one can make from %d items and %d selected at a time : %d.",n,r,fact(n)/fact(n-r)*fact(r));
    return 0;
}
int fact(int ele)
{
    int fact=1;
    for(int i=ele;i>=2;i--)
    {
        fact*=i;
    }
    return fact;
}