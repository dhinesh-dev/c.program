#include<stdio.h>
int main()
{
    float f1 =5.6;
    int a;

    //Automatic type conversion from float to int

    a=f1;

    //Manual type conversion from int to float

    float f2=(float)a;

    
    printf("%.2f\n",f1);
    printf("%d\n",a);
    printf("%.2f",f2);

return 0;
}