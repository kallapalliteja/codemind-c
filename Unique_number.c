#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,i=0,k,j,c=0;
    scanf("%d",&n);
    k=log10(n)+1;
    int a[k];
    while(n)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
        
        
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c++;
            }
        }
        
    }
    if(c==0) printf("Unique Number");
    else printf("Not Unique Number");
}
 