#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    float percentage;
    printf("enter marks of five students:");
    scanf("%d,%d,%d,%d,%d",&n1,&n2,&n3,&n4,&n5);
    percentage =(n1+n2+n3+n4+n5)/5;
    printf("percentage=%f",percentage);
    return 0;
}