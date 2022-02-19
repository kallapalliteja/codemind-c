#include<stdio.h>
int main()
{
    int n,i,c1,c2;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0 && i%2!=0)
        {
            c1++;
        }
        if(a[i]%2!=0 && i%2==0)
        {
            c2++;
        }
        
    }
    if(c2>0) printf("False");
    else printf("True");
    
}