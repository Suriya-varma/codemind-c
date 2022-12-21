#include<stdio.h>
int year(int n)
{
    int c;
    c=n%100;
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x1=year(n);
    printf("%.2d",x1);
}