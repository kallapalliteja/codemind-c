#include<stdio.h>
int main()
{
    int N;
    int r,k,p,rev1=0,rev2=0,z;
    scanf("%d",&N);
    k=N*N;
    while(N)
    { 
        r=N%10;
        N=N/10;
        rev1=rev1*10+r;
        
    }
    
    p=rev1*rev1;
    while(p)
    {
        z=p%10;
        p=p/10;
        rev2=rev2*10+z;
    }
    if(k==rev2)
    printf("True");
    else
    printf("False");
    
}