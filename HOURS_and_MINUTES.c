#include<stdio.h>
int main()
{
    int sec,min,hr;
    scanf("%d",&sec);
    hr=sec/60;
    min=sec%60;
    printf("%d Hour(s) %d Minute(s)",hr,min);
}