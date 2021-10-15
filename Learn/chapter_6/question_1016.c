/*
 * @Descripttion:
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-15 11:54:08
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 12:00:48
 */
#include <stdio.h>
int main() {
    int a, b, c, tmp;
    for (int i = 100; i < 1000; i++) {
        tmp = i;
        a = tmp % 10;
        tmp /= 10;
        b = tmp % 10;
        tmp /= 10;
        c = tmp % 10;
        if(a * a * a + b * b * b + c * c * c == i)
            printf("%d\n", i);
    }

    return 0;
}