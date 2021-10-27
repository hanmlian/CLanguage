/*
 * @Descripttion:
    某人有四张3分的邮票和三张5分的邮票，用这些邮票中的一张或若干张可以得到多少种不同的邮资？
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 15:14:17
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 15:23:00
 */
#include <stdio.h>
int main() {
    int num = 0, sum;
    int visit[28];
    for (int i = 0; i < 28; i++) {
        visit[i] = 0;
    }

    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 3; j++) {
            sum = i * 3 + j * 5;
            if (sum != 0 && !visit[sum]) {
                num++;
                visit[sum] = 1;
            }
        }
    }
    printf("%d\n", num);
    return 0;
}