#include<stdio.h>
int main()
{
    int I,b,w,c,area,o,i;
    scanf("%d%d%d%d",&I,&b,&w,&c);
    o=(I+2*w)*(b+2*w);
    i=(I*b);
    area=o-i;
    area=area*c;
    printf("%d",area);
}