/*
 * @Descripttion:
    一个正整数如果等于组成它的各位数字的阶乘之和，该整数称为阶乘和数。
    例如，145=1!+4!+5!，则145是一个三位阶乘和数。
    请问:共有多少个阶乘和数？（不会超过十万）
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 15:24:09
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 15:45:21
 */
#include <math.h>
#include <stdio.h>
#include "../common/common.h"

int func(int n) {
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int main() {
    int numbers[6], len, sum = 0, num, tmp;
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j < 5; j++) {
            num = i * pow(10, j);
            for (int k = 0; k < pow(10, j); k++) {
                tmp = num + k;
                sum = 0;
                len = breakNumber(tmp, numbers);
                for (int l = 0; l < len; l++) {
                    sum += func(numbers[l]);
                }
                if (sum == tmp) {
                    printf("%d ", sum);
                }
            }
        }
    }
    return 0;
}