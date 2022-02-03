#include<stdio.h>
int main()
{
    int T,N[2000];
    int i,k;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        k=1;
        scanf("%d
",&N[i]);
        for(N[i]=N[i];N[i]>=1;N[i]--)
        {
            k=k*N[i];
        }
        printf("%d
",k);
    }
}