/*
 * @Descripttion:
    求1+2!+3!+...+N!的和
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 10:39:44
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 10:43:31
 */
#include <stdio.h>
int main() {
    int n;
    long long sum = 1, tmp = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        tmp = tmp * i;
        sum += tmp;
    }
    printf("%lld\n", sum);
    return 0;
}