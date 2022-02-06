#include<stdio.h>
int main()
{
    int N,sum=0,i;
    scanf("%d",&N);
    for(i=1;i<=N/2;i++)
    {
        if(N%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>N)
    printf("True");
    else
    printf("False");
}