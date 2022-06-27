#include<stdio.h>
int main()
{
    int a,b,h,c=0;
    scanf("%d%d",&a,&b);
    h=a>b?a:b;
    int i,k;
    for(i=1;i<=h;i++)
    {
         k=h*i;
        if(k%h==0 && k%a==0)
        {
            c=1;
            break;
        }
    }
    if(c>0) printf("%d",k);
}