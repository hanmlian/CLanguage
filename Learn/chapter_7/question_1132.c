/*
 * @Descripttion:
    输入若干个整数,以-1标记输入结束。输出其中的最大数
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 10:33:27
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 10:37:57
 */
#include <stdio.h>
int main() {
    int a, max = -2147483648;
    while (1) {
        scanf("%d", &a);
        if (a == -1)
            break;
        max = max > a ? max : a;
    }
    printf("%d\n", max);
    return 0;
}