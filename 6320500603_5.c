#include<stdio.h>
int main()
{
    int b,i,j,n,a[3];
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        j=2;
        a[i]=n/j;
        b=n/j;
    }
    for(i=0;i<3;i++)
    {
        if(a[i]!=a[i+1])
        {
            printf("%d is a Lucky Number.",n);
        }
        else
        {
            printf("%d is not a Lucky Number.",n);
        }
    }
    return 0;
}
