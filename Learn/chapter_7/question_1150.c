/*
 * @Descripttion:
    计算t=1+1/2+1/3+...+1/n
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 14:42:46
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 14:44:18
 */
#include <stdio.h>
int main() {
    int n;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("%.6f\n", sum);
    return 0;
}