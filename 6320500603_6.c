#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

        if(x>=0&&x<=1)
        {
            if(x==0)
            {
                printf("%d",x+2);
            }
            if(x==1)
            {
                printf("%d",x+1);
            }
        }
        else if(x>=2&&x<=7)
        {
            printf("%d",x-1);
        }
        else if(x>7&&x<=100)
        {
            if(x>7&&x<11)
            printf("7");
            if(x>=11&&x<=100)
            {
               printf("11");
            }
        }
        else
        {
            printf("%d",x-1);
        }



    return 0;
}
