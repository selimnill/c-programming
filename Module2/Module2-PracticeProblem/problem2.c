#include<stdio.h>

int main()
{

    int a, b, sum, sub, mult;
    scanf("%d %d", &a, &b);


    sum = a + b;
    sub = a - b;
    mult = a * b;
    float div = a*1.0 / b;
    printf("%d + %d = %d \n", a, b, sum);
    printf("%d - %d = %d \n", a, b, sub);
    printf("%d * %d = %d \n", a, b, mult);
    printf("%d / %d = %.2f \n", a, b, div);


}