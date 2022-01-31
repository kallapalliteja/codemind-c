#include<stdio.h>
int main()
{
    int n,r,rev=0,k;
    scanf("%d",&n);
    k=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    } 
    if(k==rev)
    {
        printf("True");
    } 
    else
       printf("False");
}