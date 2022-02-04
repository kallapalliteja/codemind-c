#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    float sum=0;
    for(i=1;i<=N;i++)
    {
        sum=sum+1.0/i;
    }
    printf("%.2f",sum);
}