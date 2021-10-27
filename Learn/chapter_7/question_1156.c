/*
 * @Descripttion:
    如果一个正整数等于其各个数字的立方和，则称该数为阿姆斯特朗数(亦称为自恋性数)。
    如
 407=4^3+0^3+7^3就是一个阿姆斯特朗数。试编程求大于1小于1000的所有阿姆斯特朗数。
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 15:47:37
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 15:51:47
 */
#include <math.h>
#include <stdio.h>
#include "../common/common.h"
int main() {
    int numbers[6], len, sum = 0;
    for (int i = 2; i < 1000; i++) {
        len = breakNumber(i, numbers);
        sum = 0;
        for (int j = 0; j < len; j++) {
            sum += numbers[j] * numbers[j] * numbers[j];
        }
        if (sum == i) {
            printf("%d ", sum);
        }
    }

    return 0;
}