#include<stdio.h>
#include<math.h>
int main()
{
     long long int x,i,k;
    long int l;
    scanf("%lld",&x);
    if(x<0)
    {
        k=-x;
        if(k%10==0)
        {
            l=(float)k/10;
            printf("%lld",-l);
            
        }
        else
        {
            k=ceil((float)k/10);
        	l=(int)k;
        	printf("%ld",-l);
	
        }
    }
    else
    {
        l=x/10;
        printf("%ld",l);
    }
}