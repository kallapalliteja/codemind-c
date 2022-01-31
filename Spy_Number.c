#include<stdio.h>
int main()
{
    int r,num;
    int sum=0,prod=1;
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        num=num/10;
        sum=sum+r;
        prod=prod*r;
    } 
    if(sum==prod)
    {
        printf("Spy Number");
    }
    else
    printf("Not Spy Number");
}