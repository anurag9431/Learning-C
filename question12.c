#include<stdio.h>
int main()
{
    int result,n1,n2;

    printf("enter two integer");
    scanf("%d %d",&n1,&n2);
    
    result=n1-n2;
    
    printf("substraction of %d and %d =%d",n1,n2,result);
    
    return 0;
}