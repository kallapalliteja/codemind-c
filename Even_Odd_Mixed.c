#include<stdio.h>
int main()
{
    int N;
    int e=0,o=0,mix=0,r,c=0;
    scanf("%d",&N);
    while(N)
    {
        r=N%10;
        N=N/10;
        c=c+1;
        if(r%2==0)
        {
            e++;
        }
        else if(r%2!=0)
        {
            o++;
        }
       /* else if(r%2==0 || r%2!=0)
        {
            mix++;
        }*/
    }
   // printf("%d %d %d",e,o,mix);//
    if(c==e)
    printf("Even");
    else if(c==o)
    printf("Odd");
    else 
    printf("Mixed");
    
}