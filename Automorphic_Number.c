#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,c,p,sqr,i=0;
    scanf("%d",&n);
    m=n;
    sqr=n*n;
    while(m>0)
    {
        m/=10;
        i++;
    }
    p=pow(10,i);
    if((sqr%p)==n){
        printf("Automorphic Number");
    }
    else 
    {
        printf("Not an Automorphic Number");
    }
}