#include<stdio.h>
int main()
{
    int e,m,p,c,cs;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&cs);
    if(34>=e||34>=m||34>=p||34>=c||34>=cs)
    {
        printf("FAILED");
    }
    else
    {
        printf("PASSED");
    }
}