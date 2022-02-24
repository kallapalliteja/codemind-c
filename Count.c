#include<stdio.h>
int main()
{
    int i,j,n,ec=0,oc=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ec++;
        }
        else
        oc++;
    }
    printf("%d %d",ec,oc);
}