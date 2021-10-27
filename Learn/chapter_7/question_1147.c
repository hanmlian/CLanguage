/*
 * @Descripttion:
    角谷猜想:
    日本一位中学生发现一个奇妙的“定理”，请角谷教授证明，而教授无能为力，于是产生角谷猜想。
    猜想的内容是：任给一个自然数，若为偶数除以2，若为奇数则乘3加1，得到一个新的自然数后按照上面的法则继续演算，若干次后得到的结果必然为1。请编程验证
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 10:11:21
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 10:17:40
 */
#include <stdio.h>
int main() {
    int a, tmp;
    scanf("%d", &a);
    while (a != 1) {
        if ((a & 1) == 0) {
            tmp = a / 2;
            printf("%d/2=%d\n", a, tmp);
        } else {
            tmp = a * 3 + 1;
            printf("%d*3+1=%d\n", a, tmp);
        }
        a = tmp;
    }
    return 0;
}