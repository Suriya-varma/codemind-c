#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n);
    b=(n%4==0)?(n/4):((n/4)+1);
    printf("%d",b);
}