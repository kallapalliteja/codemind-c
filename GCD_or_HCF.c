#include<stdio.h>
int main()
{
    int a,b,i,max,flag;
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    for(i=max;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            flag=i;
            break;
        }
    }
    printf("%d",flag);
}