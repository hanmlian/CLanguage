/*
 * @Descripttion:
    斐波纳契数列
    1，1，2，3，5，8，13，21，34，55，89……这个数列则称为“斐波纳契数列”，其中每个数字都是“斐波纳契数”
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 10:22:23
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 10:30:53
 */
#include <stdio.h>
int main() {
    int n, a[2] = {1, 1};
    long total;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i < 2)
            printf("%d ", a[i]);
        else {
            total = a[0] + a[1];
            a[i % 2] = total;
            printf("%ld", total);
            if (i < n - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");
    return 0;
}