#include<stdio.h>
int sum(int n)
{
    int c;
    c=n*(n+1)/2;
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x1=sum(n);
    printf("%d",x1);
}