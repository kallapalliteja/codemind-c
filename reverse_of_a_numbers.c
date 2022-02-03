#include<stdio.h>
int main()
{
    int N,r;
    scanf("%d",&N);
    while(N)
    {
        r=N%10;
        N=N/10;
        printf("%d",r);
    }
}