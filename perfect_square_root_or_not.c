#include<stdio.h>
int main()
{
    int n,i,pn=0;
    int k;
    scanf("%d",&n);
    for(i=1;i<n/2;i++)
    {
        k=i*i;
        if(n==k)
        {
           pn=1;
           break;
        }
    }
    if(pn==1)
    printf("True");
    else
    printf("False");
}