#include<stdio.h>
int main()
{
    int n,i,max=0,ch=0,a=0,b=0,t[48];
    scanf("%d",&n);
    for(i=0;i<48;i++)
    {
        t[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        t[a-1]=t[a-1]+b;
        if(max<t[a-1])
        {
            max=t[a-1];
            ch=a;
        }
    }
    printf("%d %d",ch,max);
    return 0;
}
