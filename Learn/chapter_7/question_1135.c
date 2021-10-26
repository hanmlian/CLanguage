/*
 * @Descripttion: 
    求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个一位的整数。
    例如2+22+222+2222+22222(此时共有5个数相加)
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 11:29:29
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 11:31:07
 */
#include <stdio.h>
int main() {
    int n, a;
    scanf("%d %d", &a, &n);
    int result[n + 1];
    for (int i = 0; i < n; i++) {
        result[i] = a;
    }
    result[n] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            result[j] += a;
            int tmp = result[j] / 10;
            result[j] %= 10;
            result[j + 1] += tmp;
        }
    }

    int index = n - 1;
    if (result[n] != 0) {
        index = n;
    }
    for (int i = index; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}