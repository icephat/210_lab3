#include<stdio.h>
int main()
{
    int i,a[4],b[4],c[4],d[4],e[4];
    int j=0,k=0,x=0,y=0,z=0,max,s;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        j=j+a[i];
    }
    for(i=0;i<4;i++)
    {
        scanf("%d",&b[i]);
        k=k+b[i];
    }
    for(i=0;i<4;i++)
    {
        scanf("%d",&c[i]);
        x=x+c[i];
    }
    for(i=0;i<4;i++)
    {
        scanf("%d",&d[i]);
        y=y+d[i];
    }
    for(i=0;i<4;i++)
    {
        scanf("%d",&e[i]);
        z=z+e[i];
    }
    max=j;
    s=1;
    if(max<k)
    {
        max=k;
        s=2;
    }
    else if(max<x)
    {
        max=x;
        s=3;
    }
    else if(max<y)
    {
        max=y;
        s=4;
    }
    else
    {
        max=z;
        s=5;
    }
    printf("%d %d",s,max);


    return 0;
}
