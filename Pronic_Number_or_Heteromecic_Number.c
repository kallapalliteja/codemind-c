#include<stdio.h>
#include<math.h>
int main()
{
    int a=1,b=1,c1,c2,c,g,k,k2;
    scanf("%d",&c);
    c1=-b+sqrt(b*b-4*a*-c);
    c2=-b-sqrt(b*b-4*a*-c);
    g=2*a;
    k=c1/g;
    if(k*(k+1)==c) printf("YES");
    else printf("NO");
    
}