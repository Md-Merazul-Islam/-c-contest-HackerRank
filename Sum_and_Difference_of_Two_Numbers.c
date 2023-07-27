#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float c,d;
    scanf("%f %f",&c,&d);
    //summation 
    printf("%d ",a+b);
    //subtract
    printf("%d\n",a-b);

    //2nd summation
    printf("%0.1f ",c+d);
    //2nd subtract
    printf("%0.1f",c-d);

    return 0;
}