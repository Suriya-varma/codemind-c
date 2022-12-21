#include<stdio.h>
int max(int x,int y,int z)
{
    int c;
    c=((x*5)+(y*10))/z;
    return c;
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int x1=max(x,y,z);
    printf("%d",x1);
}