#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,c,p,k,r;
	scanf("%d %d",&n,&x);
	c=log10(n)+1;
	r=n/pow(10,c-x);
	k=n%(int)pow(10,x);
    p=r-k;
    printf("%d",abs(p));
}