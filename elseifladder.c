#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter a Three Number ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
        max=a;
    else
        if(b>=a && b>=c)
        max=b;
    else
    max=c;
    printf("Max is %d",max);
    return 0;
}