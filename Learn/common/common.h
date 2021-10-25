/*
 * @Descripttion: 
 * @version: 
 * @Author: hanmlian
 * @Date: 2021-10-13 11:34:10
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 16:24:00
 */
#ifndef COMMON_H_
#define COMMON_H_

#include <stdio.h>
#include <stdlib.h>

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
#endif