#include<stdio.h>
int main()
{
	int n,r,md=0;
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r>md)
		{
			md=r;
		}
	} 
	printf("%d",md);
}