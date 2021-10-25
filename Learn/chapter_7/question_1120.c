/*
 * @Descripttion:
    输出所有的"水仙花数".所谓"水仙花数"是指这样的一个三位数：其各位数字的立方和等于该数本身
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 11:27:14
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 11:30:11
 */
#include <stdio.h>

int isNumberOfDaffodils(int a) {
    int tmp = a, b[3];
    for (int i = 0; i < 3; i++) {
        b[i] = tmp % 10;
        tmp /= 10;
    }
    int sum = b[0] * b[0] * b[0] + b[1] * b[1] * b[1] + b[2] * b[2] * b[2];
    if (sum == a) {
        return 1;
    }
    return 0;
}

int main() {
    for (int i = 100; i < 1000; i++) {
        if (isNumberOfDaffodils(i) == 1)
            printf("%d\n", i);
    }
    return 0;
}