/*
 * @Descripttion:
    一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 编程序找出N之内的所有完数
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-15 15:26:36
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 15:26:36
 */
#include <stdio.h>
int main() {
    int n, i, j, tem;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        tem = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                tem += j;
            }
        }
        if (tem == i) {
            printf("%d its factors are", i);
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    printf(" %d", j);
                }
            }
            printf("\n");
        }
    }
}