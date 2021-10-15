/*
 * @Descripttion: 
 * @version: 
 * @Author: hanmlian
 * @Date: 2021-10-13 11:34:10
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 11:28:49
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

/**
 * @name: max
 * @msg: 求a,b的最大值
 * @param {int} a
 * @param {int} b
 * @return {int} 返回最大值
 */
extern int max(int a, int b);
#endif