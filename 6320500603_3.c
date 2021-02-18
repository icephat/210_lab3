#include<stdio.h>
int main()
{
    int a,n,i=2;
    scanf("%d",&n);
    while(n/i>0)
    {

        if(n%i==0)
        {
            printf("%d\n",i);
            n=n/i;

        }
        else if(n%i!=0)
        {
            i++;
        }

    }
    printf("0");

    return 0;
}
