/*
 * @Descripttion:
    试求满足下述立方和不等式的m的整数解。
    1^3+2^3+...+m^3〈=n
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 16:07:18
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 16:08:59
 */
#include <stdio.h>
#include <string.h>
int main() {
    int n, sum = 0, i;
    scanf("%d", &n);
    for (i = 1;; i++) {
        sum += i * i * i;
        if (sum > n) {
            break;
        }
    }
    printf("%d\n", i - 1);
    return 0;
}