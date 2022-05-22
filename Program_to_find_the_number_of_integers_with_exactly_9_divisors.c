#include<stdio.h>
int div(int n)
{
    int i,j,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    return c;
}
int main()
{
    int i,n,k,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(div(i)==9)
        {   printf("%d ",i);
            t=t+1;
        }
    }
    printf("
");
    printf("Total=%d",t);
    
}