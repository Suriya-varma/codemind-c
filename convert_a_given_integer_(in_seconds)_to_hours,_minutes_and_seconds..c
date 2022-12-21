#include<stdio.h>
int main()
{
    int sec,hr,m,s;
    scanf("%d",&sec);
    hr=(sec/3600);
    m=(sec-(3600*hr))/60;
    s=(sec-(3600*hr)-(m*60));
    printf("H:M:S-%d:%d:%d
",hr,m,s);
}