#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=sqrt(a);
        if(b*b==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
    }
}