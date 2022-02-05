#include<stdio.h>
int main()
{
    int N,r,rev=0;
    scanf("%d",&N);
    while(N)
    {
        r=N%10;
        N=N/10;
        rev=rev*10+r;
    }
    printf("%d",rev);
}