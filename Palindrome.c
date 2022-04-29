#include<stdio.h>
int main()
{
    int r,n,a,rev=0;
    scanf("%d",&n);
    a=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
}
  if(a==rev) printf("True");
    else printf("False");
}