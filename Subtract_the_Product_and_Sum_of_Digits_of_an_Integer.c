#include<stdio.h>
int main()
{
    int n,r,s=0,p=1,sub; 
    scanf("%d",&n);
    while(n>0) 
    {
        r=n%10; 
        s=s+r;
        p=p*r;
        n=n/10; 
            }
            sub=p-s; 
            printf("%d",sub);
}