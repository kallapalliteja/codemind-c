#include<stdio.h>
int main()
{
	int i,j,n,k=0,c,sum=0;
	float avg;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 for(i=0;i<n;i++)
	 {   
	 if(a[i]!=-1)
	 {
	     c=1;
	     	for(j=0;j<n;j++)
	        	{
	     		if(a[i]==a[j] && i!=j)
	 	    	{
	 		    	c++;
	 		    	a[j]=-1;
			    }
               }
		 if(a[i]==c)
     	{
	    	sum=sum+a[i];
	    	k++;
	    	
	    	
	    }
	}
	
	
	
	 }
	 if(k>0)
	 {
	 
	 avg=(float)sum/k;
	 printf("%.2f",avg);
    }
	else
	printf("-1"); 
	 
}