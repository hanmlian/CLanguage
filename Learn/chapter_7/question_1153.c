/*
 * @Descripttion:
    张王李三家各有三个小孩。一天，三家的九个孩子在一起比赛短跑，规定不分年龄大小，跑第一得9分，跑第2得8分，依此类推。
    比赛结果各家的总分相同，且这些孩子没有同时到达终点的，也没有一家的两个或三个孩子获得相连的名次。
    已知获第一名的是李家的孩子，获得第二的是王家的孩子。问获得最后一名的是谁家的孩子？
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 14:51:42
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 15:13:08
 */
#include <stdio.h>
int main() {
    int a, b, c, d;
    for (a = 6; a > 0; a--) {
        for (b = 6; b > 0; b--) {
            for (c = 7; c > 0; c--) {
                for (d = 7; d > 0; d--) {
                    //去除相等，相连的情况
                    if (a + b == 6 && c + d == 7 && a != b && a != c &&
                        a != d && b != c && b != d && c != d && a - b != 1 &&
                        a > b && c - d != 1 && c > d) {
                        if (a == 1 || b == 1)
                            printf("L");
                        else if (c == 1 || d == 1)
                            printf("W");
                        else
                            printf("Z");
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;
}