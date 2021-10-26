/*
 * @Descripttion:
    3025这个数具有一种独特的性质：将它平分为二段，即30和25，使之相加后求平方，即(30+25)2，恰好等于3025本身。请求出具有这样性质的全部四位数
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 11:32:32
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 11:35:45
 */
#include <stdio.h>
int main() {
    int a, b;
    int first = 1;
    for (int i = 1000; i < 10000; i++) {
        a = i % 100;
        b = i / 100;
        if ((a + b) * (a + b) == i) {
            if (!first)
                printf(" ");
            printf("%d", i);
            first = 0;
        }
    }

    printf("\n");
    return 0;
}