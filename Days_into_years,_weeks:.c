#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a,b;
    a=x/365;
    b=(x-(a*365))/7;
    printf("%d
%d",a,b);
}