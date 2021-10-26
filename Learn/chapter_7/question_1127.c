/*
 * @Descripttion:
    验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 17:43:16
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 18:02:24
 */
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    long sum = a * a * a;
    int res = (sum - a * a + a) / a;
    printf("%d*%d*%d=%ld=", a, a, a, sum);
    for (int i = 0; i < a; i++) {
        printf("%d", res);
        res += 2;
        if (i < a - 1) {
            printf("+");
        }
    }
    printf("\n");
    return 0;
}