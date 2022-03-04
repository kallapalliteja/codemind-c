#include<stdio.h>
int main()
{
    int i,max=0,c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
        }
        else
        {
            if(c>max)
             {
                 max=c;
                 c=0;
             }
        }
    }
    printf("%d",max);
}