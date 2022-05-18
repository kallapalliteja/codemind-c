#include<stdio.h>
#include<math.h>
int main()
{
    int i, n,j,l,p;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {  //printf("%d ",arr[i]);
        p=abs(arr[i]);
        if(p!=0)
        {
		
        l=log10(p)+1;
        printf("%d ",l);
       }
       else
       {
       	printf("%d ",1);
	   }
    }
}