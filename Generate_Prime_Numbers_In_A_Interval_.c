#include<stdio.h>
int prime(int n)
{
    int i,k,l,c=0;
    if(n==1 ||n==0 || n==4)
    {
        return 0;
    }
    else
    {
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        return 1;
        else
        return 0;
    }
}
int main()
{
    
    int i,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(prime(i))
        {
            printf("%d
",i);
        }
    }
    
    
    
    
    
    
    
    
}