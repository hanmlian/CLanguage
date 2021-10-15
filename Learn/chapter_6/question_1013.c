/*
Description
求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。
例如，n=5时=2+22+222+2222+22222，n由键盘输入。
 */
#include <stdio.h>
int main() {
    int n, a = 2;
    scanf("%d", &n);
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