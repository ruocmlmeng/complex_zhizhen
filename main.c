#include <stdio.h>
#include "complex.h"
int main(void)
{
    double real1, imag1, real2, imag2;
    printf("请输入两个复数的实部和虚部：");
    scanf("%lf %lf", &real1, &imag1);
    scanf("%lf %lf", &real2, &imag2);

    complex* a = creatComplex(real1, imag1);
    complex* b = creatComplex(real2, imag2);

    complex* sum = add(a, b);
    complex* diff = sub(a, b);
    complex* prod = mul(a, b);
    complex* quot = divide(a, b);

    printf("a = ");
    printfComplex(a);
    printf("b = ");
    printfComplex(b);

    printf("a + b = ");
    printfComplex(sum);
    printf("a - b = ");
    printfComplex(diff);
    printf("a * b = ");
    printfComplex(prod);
    printf("a / b = ");
    printfComplex(quot);

    freeComplex(a);
    freeComplex(b);
    freeComplex(sum);
    freeComplex(diff);
    freeComplex(prod);
    freeComplex(quot);
}
