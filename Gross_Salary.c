#include<stdio.h>
int main()
{
    float basic,da,hra,gr;
    scanf("%f",&basic);
    if(basic<=10000)
    {
        da=basic*0.80;
        hra=basic*0.20;
    }
    else if(basic<=20000)
    {
        da=basic*0.90;
        hra=basic*0.25;
    }
    else
    {
        da=basic*0.95;
        hra=basic*0.30;
    }
    gr=basic+hra+da;
    printf("%0.2f",gr);
}