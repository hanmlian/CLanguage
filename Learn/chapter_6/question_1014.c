/*
 * @Descripttion: 求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-15 11:04:11
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 11:15:59
 */
#include <stdio.h>
int main() {
    int n;
    long long int sum = 0, t = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        t *= i;
        sum += t;
    }
    printf("%lld", sum);
}