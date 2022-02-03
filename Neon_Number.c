#include<stdio.h>
int main()
{
    int N,k,r,sum=0;
    scanf("%d",&N);
    k=N*N;
    while(k)
    {
        r=k%10;
        k=k/10;
        sum=sum+r;
    }
    if(N==sum)
    {
        printf("Neon Number");
    }
    else
        printf("Not Neon Number");
        
        
}