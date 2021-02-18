#include<stdio.h>
int main()
{
    int a,b[3],c,i=2,j=0,n;
    scanf("%d",&n);
    a=n;
    while(1)
    {
        if(a%i==0)
        {
            c++;
        }
        else
        {
            break;
        }
        i++;
    }

        if(c>3||c<3)
        {
            printf("%d is not a Lucky Number.",n);
        }
        else
        {
            printf("%d is a Lucky Number.",n);
        }
    return 0;
}
