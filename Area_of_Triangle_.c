#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double ar,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf",ar);
    
}