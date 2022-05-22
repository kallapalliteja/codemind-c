#include<stdio.h>
int main()
{
    int i,j,n,c;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] and i!=j)
            {
                c=c+1;
            }
        }
        if(c==1)
        {
            printf("%d",arr[i]);
        }
    }
}