/*
 * @Descripttion:
    按如下递归公式求函数值。
x=1时 f(x)=10；x>1时 f(x)=f(x-1)+2
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 15:04:34
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 15:05:42
 */
#include <stdio.h>

int func(int x) {
    if (x == 1) {
        return 10;
    }
    return func(x - 1) + 2;
}

int main() {
    int a, b;
    scanf("%d", &a);
    b = func(a);
    printf("%d", b);
    printf("\n");
    return 0;
}