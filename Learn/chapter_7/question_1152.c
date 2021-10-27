/*
 * @Descripttion: 
 * 计算：t=1-1/(2*2)-1/(3*3)-...-1/(m*m)
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 14:48:27
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 14:49:46
 */
#include <stdio.h>
int main() {
    int n;
    double sum = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        sum -= 1.0 / (i * i);
    }
    printf("%.6f\n", sum);
    return 0;
}