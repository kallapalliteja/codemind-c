#include<stdio.h>
#include<math.h>
int tej(int a)
{
	int r,k,l=0;
	k=a;
	while(k)
	{
		r=k%10;
		k=k/10;
		if(r==0)
		{
			break;
		}
		else if(a%r==0)
		{
			l++;
		}
	}
	return l;
}
int main()
{
	int a,b,i,h,s;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		h=log10(i)+1;
		if(h==1) printf("%d ",i);
		else
		{
			s=tej(i);
			if(h==s) printf("%d ",i);
		}
		
	}
}