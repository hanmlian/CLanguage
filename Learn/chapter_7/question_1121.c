/*
 * @Descripttion:
    一个自然数被8除余1,所得的商被8除也余1,
    再将第二次的商被8除后余7,最后得到一个商为a.
    又知这个自然数被17除余4.所得的商被17除余15,
    最后得到一个商是a的2倍.
    求这个自然数.
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 14:17:33
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 14:34:52
 */
#include <stdio.h>
int main() {
    int a, b, c, d;
    int x1, x2;  //最终方程系数
    int res;
    a = 8 * 8 * 8;
    b = (7 * 8 + 1) * 8 + 1;
    c = 2 * 17 * 17;
    d = 15 * 17 + 4;
    x1 = a - c;
    x2 = b - d;
    res = -x2 / x1;
    res = res * a + b;
    printf("%d\n", res);
    return 0;
}