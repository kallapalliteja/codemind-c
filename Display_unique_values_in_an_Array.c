#include<stdio.h>
int main()
{
    int n,i,j,c,max=0,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
    for(i=0;i<n;i++)
      {       c=1;
           // k=0;
           
             for(j=0;j<n;j++)
            {
			 if(a[i]==a[j] && i!=j)
               c++;
            }
           
      if(c==1)
      {
      	k++;
      	printf("%d ",a[i]);
    }
      }
   // if(k>0) printf("%d",max);
  if(k==0) printf("-1");
// printf("%d",k);
    
}

          