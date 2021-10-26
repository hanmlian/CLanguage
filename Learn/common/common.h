/*
 * @Descripttion: 
 * @version: 
 * @Author: hanmlian
 * @Date: 2021-10-13 11:34:10
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 10:06:41
 */
#ifndef COMMON_H_
#define COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void dec_to_x(int, int);

/**
 * 求两个数的最大公约数
 */
extern int gcd(int, int);

/**
 * 求两个数的最小公倍数
 */
extern int lcm(int, int);

extern int max(int , int);

extern void eratosthenesSieve(int, int*);

extern int getNumberFactors(int n, int res[]);

extern void swapNumber(int* a, int* b);

extern int bubbbleSort(int array[], int length, int compare);
#endif