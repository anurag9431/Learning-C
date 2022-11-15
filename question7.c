#include<stdio.h>
int main()
{
    int km,m;
    printf("enter the distance in meter");
    scanf("%d",&m);
    km=m/1000;
    m=(km%1000);
    printf("distance%d %dkm %dm",km,m);
    return 0;
}