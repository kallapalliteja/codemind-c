#include<stdio.h>
int main()
{
    int a,r=0;
    scanf("%d",&a);
    int i;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            r=r+i;
        }
    }
    if(r==a) printf("True");
    else printf("False");
}