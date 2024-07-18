/**
  ******************************************************************************
  * @file           : complex.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/18
  ******************************************************************************
  */

#include "complex.h"

//创建一个复数
complex * creatComplex(double real,double imag)
{
  complex * c  = (complex *)malloc(sizeof(complex *));
  if(c!=NULL)
  {
    c->real = real;
    c->imag = imag;
  }

  return c;
}

//复数加法
complex * add(complex * a,complex * b)
{
  complex * c = creatComplex(a->real + b->real,a->imag + b->imag);
  return c;
}

//复数减法
complex *sub(complex * a,complex * b)
{
  complex * c = creatComplex(a->real - b->real,a->imag - a->imag);
  return c;
}

//复数乘法
complex *mul(complex *a,complex *b)
{
  complex * c = creatComplex( ( (a->real * b->real) - (a->imag * b->imag) ) , ((a->imag * b->real) + (a->real * b->imag)) );
  return c;
}

//复数的除法
complex *divide (complex *a ,complex *b)
{
  double denom = b->real * b->real + b->imag * b->imag;
  complex * c = creatComplex( (a->real * b->real + a->imag * b->imag) / denom ,(a->imag * b->real - a->real*b->imag) / denom);
  return c;
}

//打印函数
void printfComplex(complex * c)
{
  if(c->imag >= 0)
  {
    printf("%.2lf + %.2lfi\n",c->real,c->imag);
  }
  else
  {
    printf("%.2lf - %.2lfi\n",c->real,-c->imag);
  }
}

//动态开辟了空间就需要释放掉
void freeComplex(complex *c)
{
  free(c);
}