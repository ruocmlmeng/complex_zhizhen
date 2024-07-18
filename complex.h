/**
  ******************************************************************************
  * @file           : complex.h
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/18
  ******************************************************************************
  */

#ifndef COMPLEX_H
#define COMPLEX_H

#include<stdio.h>
#include<stdlib.h>
typedef struct complex
{
  double real;
  double imag;
}complex;

//创建一个复数
complex * creatComplex(double real,double imag);

//复数加法
complex * add(complex * a,complex * b);

//复数减法
complex *sub(complex * a,complex * b);

//复数乘法
complex *mul(complex *a,complex *b);

//复数的除法
complex *divide (complex *a ,complex *b);

//打印函数
void printfComplex(complex * c);

//动态开辟了空间就需要释放掉
void freeComplex(complex *c);
#endif //COMPLEX_H
