#include<stdio.h>
int hours(int min)
{
    int c;
    c=min/60;
    return c;
}
int minutes(int min)
{
    int c;
    c=min%60;
    return c;
}
int main()
{
    int min;
    scanf("%d",&min);
    int x1=hours(min);
    int x2=minutes(min);
    printf("%d Hour(s) %d Minute(s)",x1,x2);
}