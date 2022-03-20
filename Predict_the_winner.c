#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x=0,y=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            x=x+a[i];
        }
        else
        y=y+a[i];
    }
    k=abs(x-y);
    if(k%4==0)
    printf("X");
    else
    printf("Y");
    
}