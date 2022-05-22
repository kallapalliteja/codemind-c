#include<stdio.h>
int prime(int n)
{
	int j,f=0;
	if(n==1)
	{
		return 0;
	}
	else
	{
		for(j=2;j<=n/2;j++)
		{
			if(n%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
	    return 1;
	    else
	    return 0;
	}
}
int main()
{
	int n,i,j,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
	        if(prime(i)!=1)
	        {
	            c=c+1;
	        }
	    }
	}
	printf("%d",c);
	
}





