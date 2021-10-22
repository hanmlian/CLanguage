/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-22 16:37:26
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-22 16:42:30
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