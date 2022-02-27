#include<stdio.h>
#include<math.h>
int main()
{
    long int n,r,d;
    scanf("%ld",&n);
    d=log10(n)+1;
    if(d==10)
    printf("Valid");
    else
    printf("Invalid");
}