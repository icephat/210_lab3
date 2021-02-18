#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    while(x>1)
    {
        if((x%2==0||x%3==0||x%5==0||x%7==0||x%23==0||x%29==0)&&(x!=2&&x!=3&&x!=5&&x!=7&&x!=23&&x!=27))
        {
            x--;
        }
        else
        {
            printf("%d",x);
            break;
        }
    }
    return 0;
}
