#include<stdio.h>
int main()
{
    int n,r,sum=0,a;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    n=a;
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}