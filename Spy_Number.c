#include<stdio.h>
int main()
{
    int a,b,r,s=0,p=1;
    scanf("%d",&a);
    b=a;
    while(b)
    {
        r=b%10;
        b=b/10;
        s=s+r;
        p=p*r;
    }
    if(s==p) printf("Spy Number");
    else printf("Not Spy Number");
}