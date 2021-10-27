/*
 * @Descripttion:
    编写一个程序，计算1977！的值
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 10:21:41
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 11:09:17
 */
#include <stdio.h>
int main() {
    int a[6000], len = 1;
    int i, j;
    a[0] = 1;
    for (i = 1; i < 6000; i++) {
        a[i] = 0;
    }
    for (i = 1; i <= 1977; i++) {
        for (j = 0; j < len; j++) {
            a[j] *= i;
        }

        for (j = 0; j < len; j++) {
            if (a[j] / 10 && j + 1 == len) {
                len++;
            }
            a[j + 1] += a[j] / 10;
            a[j] %= 10;
        }
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}