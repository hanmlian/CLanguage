/*
 * @Descripttion:
    计算一个整数N的阶乘
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 14:46:20
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 14:47:24
 */
#include <stdio.h>
int main() {
    int n;
    long sum = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    printf("%ld\n", sum);
    return 0;
}