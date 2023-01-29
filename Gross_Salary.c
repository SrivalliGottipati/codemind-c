#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    float da,hra,gs;
    if(x<=10000)
    {
        da=0.8*x;
        hra=0.2*x;
    }
    else if(x<=20000)
    {
        da=0.9*x;
        hra=0.25*x;
    }
    else
    {
        da=0.95*x;
        hra=0.3*x;
    }
    gs=x+hra+da;
    printf("%0.2f",gs);
}