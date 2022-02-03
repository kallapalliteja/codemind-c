#include<stdio.h>
int main()
{
    int N;
    int p;
   int sum=0,r;
    scanf("%d",&N);
    p=N;
    
    while(N)
    {
        r=N%10;
        N=N/10;
        sum=sum+r;
        
    }
    if(p%sum==0)
    {
        printf("True");
    }
    else
    printf("False");
}