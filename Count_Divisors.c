#include<stdio.h>
int main()
{
    int i,r,k;
    int j,count=0;
    scanf("%d %d %d",&i,&r,&k);
    for(i=i;i<=r;i++)
    {
        if(i%k==0)
        {
           count++; 
        }
    }
    printf("%d",count);
    
}