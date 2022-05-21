#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    k=sqrt(n);
    if(k*k==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
