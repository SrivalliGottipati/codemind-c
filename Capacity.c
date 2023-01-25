#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int a;
    a=(2*s*t*b*512)/1024;
    printf("%d KB",a);
    
}