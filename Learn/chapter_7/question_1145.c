/*
 * @Descripttion:
    一个球从100m高度自由落下,每次落地后反跳回原来高度的一半,再落下,再反弹.求它在第N次落地时共经过多少米?
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 17:01:58
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 17:06:45
 */
#include <stdio.h>
int main() {
    int n;
    double sum = 100, height = 50;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        sum += height * 2;
        height /= 2;
    }
    printf("%.4f\n", sum);
    return 0;
}