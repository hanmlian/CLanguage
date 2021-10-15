/*
 * @Descripttion:
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-15 11:18:38
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 11:49:33
 */
#include <stdio.h>
#include "../common/common.h"
int main() {
    int a, b, c;
    double sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    int maxNumber = max(a, b);
    maxNumber = max(maxNumber, c);
    double i = 1;
    while (i <= maxNumber) {
        if (i <= a) {
            sum += i;
        }
        if (i <= b) {
            sum += i * i;
        }
        if (i <= c) {
            sum += 1.0 / i;
        }
        i++;
    }
    printf("%.2lf\n", sum);
    return 0;
}