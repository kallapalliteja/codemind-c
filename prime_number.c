#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,count=0;
    for(i=2;i<N/2;i++)
    {
        if(N%i==0)
        {
            count=count+1;
            break;
        }
        
    } 
    if(count==1)
    {
        printf("not a prime");
    }
    else
    printf("prime");
    
    
}