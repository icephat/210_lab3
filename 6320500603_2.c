#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][n-1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            scanf("%d %d",&a[j][i]);
        }
    }




    return 0;
}
