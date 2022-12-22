#include<stdio.h>
int main()
{
    int n,a[100000],j,i=0;
    while(1){
        scanf("%d",&n);
    if(n==-1)
    break;
    a[i++]=n;
    }
    for(j=0;j<i;j++)
    {
        printf("%d
",(a[j])*(a[j]));
    }
}