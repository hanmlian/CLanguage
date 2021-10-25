/*
 * @Descripttion: 
    写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入。
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-22 16:37:26
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 09:28:18
 */
#include<stdio.h>
#include "../common/common.h"

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}