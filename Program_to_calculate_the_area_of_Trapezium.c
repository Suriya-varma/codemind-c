#include<stdio.h>
float area(int b1,int b2,int h)
{
    float c;
    c=0.5*(b1+b2)*h;
    return c;
}
int main()
{
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    float x1=area(b1,b2,h);
    printf("%.4f",x1);
}