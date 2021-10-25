/*
 * @Descripttion:
    按递增顺序依次列出所有分母为40，分子小于40的最简分数
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 16:08:11
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 16:23:23
 */
#include <stdio.h>
#include "../common/common.h"

int main() {
    int value;
    for (int i = 1; i <= 40; i++) {
        value = gcd(i, 40);
        if (value == 1) {
            printf("%d/%d,", i, 40);
        }
    }
    printf("\n");
    return 0;
}