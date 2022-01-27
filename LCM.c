#include<stdio.h>
int main()
{
    int a,b;
    int lcm,max;
    int i;
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    for(i=max;;i=i+max)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        
    }
    printf("%d",lcm);
}
    