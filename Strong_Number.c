#include<stdio.h>
int tej(int k)
{
	int i,f=1;
	for(i=1;i<=k;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n ,r,p,k,sum=0;
	scanf("%d",&n);
	p=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		k=tej(r);
		sum=sum+k;
	}
	if(p==sum)
	{
	    printf("The number %d is a strong number",p);
	    
	}
	else 
	printf("The number %d is not a strong number",p);

}