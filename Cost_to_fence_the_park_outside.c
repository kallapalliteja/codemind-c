#include<stdio.h>
int main()
{
    int L,B,W,C;
    int l,b,w;
    int area;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    area=((L+2*W)*(B+2*W))-(L*B);
    area*C;
    printf("%d",area*C);
}