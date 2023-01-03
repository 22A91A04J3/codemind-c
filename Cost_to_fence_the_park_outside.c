#include<stdio.h>
int main()
{
    int i,b,w,cst,tc;
    scanf("%d%d%d%d",&i,&b,&w,&cst);
    tc=cst*((i+2*w)*(b+2*w)-(i*b));
    printf("%d",tc);
}