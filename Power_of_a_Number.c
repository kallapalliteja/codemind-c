#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,k;
    scanf("%d%d%d",&x,&y,&m);
   k=pow(x,y); 
   k%m;
   printf("%d",k%m);
}