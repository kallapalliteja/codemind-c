#include<stdio.h>
#include<math.h>
int tej(int a)
{
	int r,b,c=0,d,k;
	while(a)
	{
		r=a%10;
		a=a/10;
		c=c+r*r;
		
	}
	d=log10(c)+1;        //>>>>>>>>>32...13...10...1
	if(d==1)
	{
		k=c;
	}
	else
	{
		k=tej(c);
	}
	return k;
}
/*int tej2(int a)
{
	int b,c,d;
	b=tej1(a);
	c=log10(b)+1;
	if(c==1)
	{
		return b;
	}
	else
	{
		b=tej1(a);  32  12
	}
	
}*/
int main()
{
	int a,b,c;
	scanf("%d",&a);
	b=tej(a);
	if(b==1 || b==7) printf("True");
	else printf("False");
	
}
 
	