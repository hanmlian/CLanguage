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
#endif