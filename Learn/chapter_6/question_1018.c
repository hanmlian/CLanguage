/*
 * @Descripttion:
    有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13......
 求出这个数列的前N项之和，保留两位小数。
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-15 15:18:15
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 15:23:17
 */
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double up = 2.0, down = 1.0, tmp;
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        result += up / down;
        tmp = up;
        up += down;
        down = tmp;
    }
    printf("%.2lf\n", result);
    return 0;
}