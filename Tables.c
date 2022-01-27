#include<stdio.h>
int main()
{
    int N,R,i=1;
    scanf("%d %d",&N,&R);
    while(i<=R)
    {
        if(i%2!=0)
        {
            N*i;
            printf("%d x %d = %d
",N,i,N*i);
        }
        i++;
    }
}