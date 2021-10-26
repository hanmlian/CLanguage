/*
 * @Descripttion:
    利用 pi/4=1-1/3+1/5-1/7...公式求pi的近似值，当某一项的绝对值小于10-6为止
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 11:09:59
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 11:24:07
 */
#include <stdio.h>
int main() {
    double pi = 0, tmp;
    int index = 1, count = 1;
    const double min = 1e-6;
    while (1) {
        tmp = 1.0 / index;
        if (tmp < min)
            break;
        if ((count & 1) == 0)
            tmp = -tmp;
        pi += tmp;
        index += 2;
        count++;
    }
    pi *= 4;
    printf("%.6f\n", pi);
    return 0;
}