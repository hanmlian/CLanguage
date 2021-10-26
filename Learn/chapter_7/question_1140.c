/*
 * @Descripttion:
    一辆以固定速度行驶的汽车，司机在上午10点看到里程表上的读数是一个对称数(即这个数从左向右读和从右向左读是完全一样的)，为95859。
    两小时后里程表上出现了一个新的对称数。问该车的速度是多少？新的对称数是多少？
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 15:45:27
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 15:49:37
 */
#include <stdio.h>
#include <string.h>
int main() {
    int n = 0, s, i, v, a, b, c, d;
    for (i = 95860; n != 1; i++) {
        a = i / 10000;
        b = i / 1000 % 10;
        c = i % 100 / 10;
        d = i % 10;
        if (a * 10 + b == d * 10 + c) {
            n = 1;
        }
    }
    i -= 1;
    v = (i - 95859) / 2;
    printf("%d\n", i);
    return 0;
}