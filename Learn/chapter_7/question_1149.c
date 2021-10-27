/*
 * @Descripttion:
    计算1~N之间所有奇数之和
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 11:17:16
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 14:41:14
 */
#include <stdio.h>
int main() {
    int n;
    long long sum = 0;
    scanf("%d", &n);
    if ((n & 1) == 0) {
        n -= 1;
    }
    int count = (n - 1) / 2 + 1;
    sum = (1 + n) * count / 2;
    printf("%lld\n", sum);
    return 0;
}