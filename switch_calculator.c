#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter First Number Operator Second Number with Spaces in Between : ");
    scanf("%d %c %d",&a,&op,&b);

    switch (op)
    {
    case '+':
        printf("\nResult is : %d",a+b);
        break;
    case '-':
        printf("\nResult is : %d",a-b);
        break;
    case '*':
        printf("\nResult : %d",a*b);
        break;
    case '/':
        printf("\nResult : %d",a/b);
        break;
    case '%':
        printf("\nResult : %d",a%b);
        break;
    default:
        printf("Enter a Valid Operator");
        break;
    }
return 0;
}