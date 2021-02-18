#include<stdio.h>
int main()
{
    int i,j,a,m=0,mi=0;
    for(i=1;i<=5;i++)
    {
        int t=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&a);
            t+=a;
        }
        if(t>m)
        {
            m=t;
            mi=i;
        }
    }
    printf("%d %d",mi,m);
    return 0;
}
