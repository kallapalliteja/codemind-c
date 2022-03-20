#include<stdio.h>
int main()
{
    int n,i,amt=0,eamt=0,tamt;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            amt++;
        }
        else
        eamt=eamt+2*1;
    }
    tamt=amt+eamt;
    printf("%d",tamt);
    
}