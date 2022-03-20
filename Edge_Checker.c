#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a+1==b || a-1==b)
    printf("Yes");
    else if(a-9==b || a==b-9)
    printf("Yes");
    else
    printf("No");
}