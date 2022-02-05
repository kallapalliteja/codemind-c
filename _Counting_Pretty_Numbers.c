#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int a,b,i,j,p,r,flag=0;
    for(i=1;i<=T;i++)
    {
	scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {  
               r=j%10;
                if(r==2||r==3||r==9)
                {
                    flag++;
                    
                }
                
            
        }
        printf("%d
",flag);
         flag=0;
    }
}