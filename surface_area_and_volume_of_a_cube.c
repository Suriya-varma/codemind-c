#include<stdio.h>
float surfacearea(float a)
{
    float c;
    c=6*a*a;
    return c;
}
float  volume(float a)
{
    float c;
    c=a*a*a;
    return c;
}
int main()
{
    float a;
    scanf("%f",&a);
    int x1=surfacearea(a);
    printf("Surface area = %d",x1);
    int x2=volume(a);
    printf(" and Volume = %d",x2);
}