#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a,b,c,d,e;
    a=x+y;
    b=x-y;
    c=x*y;
    d=x/y;
    e=x%y;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",a,b,c,d,e);
}