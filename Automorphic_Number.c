#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r;
	scanf("%d",&a);
	if(a<0)
	{
	  b=a+2*(-a);	
	}
	else
	{
		b=a;
	}
	c=log10(b)+1;
	d=b*b;
	while(d)
	{
		r=d%(int)pow(10,c);
	//	r=d/pow(10,c);
		if(r==a)
		{
			printf("Automorphic Number");
			break;
		}
		else
		{
			printf("Not an Automorphic Number");
			break;
		}
	}
}