#include<stdio.h>
int main()
{
    int T,i,N,p;
    int rev=0,r;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {  
        scanf("%d",&N);
        p=N;
        
    while(N)
    {
        r=N%10;
        N=N/10;
        rev=rev*10+r;
        
    } 
    if(p==rev)
    printf("True
");
    else
    printf("False
");
     rev=0;

    }
}