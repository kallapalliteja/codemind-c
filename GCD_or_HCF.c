#include<stdio.h>
int main()
{
int a,b,c,i;
scanf("%d%d",&a,&b);
c=a<b?a:b;
for(i=c;i>=1;i--)
{
    if(a%i==0 && b%i==0)
    {
        printf("%d",i);
        break;
    }
}
}