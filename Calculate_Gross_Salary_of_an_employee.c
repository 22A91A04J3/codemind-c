#include<stdio.h>
int main()
{
    float bas,hra,da,pf,gs;
    scanf("%f%f%f",&bas,&hra,&da);
    pf=bas*12/100;
    gs=bas+hra+da+pf;
    printf("%0.2f
%0.2f",pf,gs);
}