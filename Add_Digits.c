#include<stdio.h>
#include<math.h>
int tej(int n)
{
    int r,sum=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    return sum;
}
int tej1(int k)
{
	int c;
	c=log10(k)+1;
	return c;
}
  
int main()
{
    int n,i,k;
    scanf("%d",&n);
    i=n;
    while(tej1(i)!=1)
	{
		k=tej(i);
		i=k;
	}
    printf("%d",i);
    
}