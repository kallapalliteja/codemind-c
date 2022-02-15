#include<stdio.h>
#include<math.h>
int main()
{    int n,k,i,ec=0,c;
	scanf("%d",&n);
		int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{   
	    c=log10(a[i])+1;   
		if(c%2==0)
		ec++;              

	    
	}
	printf("%d",ec);
}