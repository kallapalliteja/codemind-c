#include<stdio.h>
int main()
{
    int a,k,r,b=0;
    scanf("%d",&a);
    k=a*a;
    while(k)
    {
        r=k%10;
        k=k/10;
        b=b+r;
        
    }
    if(a==b) printf("Neon Number");
    else printf("Not Neon Number");
    
}