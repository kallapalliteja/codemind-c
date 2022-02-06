#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int i,r,z,sum=0,c=0,k,p,pn=0;
    scanf("%d",&N);
    p=N;
    while(N)
    {
        r=N%10;
        N=N/10;
        c++;
    } 
    z=p;
    while(p)
    {
        k=p%10;
        p=p/10;
        sum=sum+pow(k,c);
        c--;
        
    }
    if(z==sum)
    printf("True");
    else
   printf("False");
    
}