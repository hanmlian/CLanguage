/*
 * @Descripttion:
    某侦察队接到一项紧急任务，要求在A、B、C、D、E、F六个队员中尽可能多地挑若干人，但有以下限制条件：
    1)A和B两人中至少去一人；
    2)A和D不能一起去；
    3)A、E和F三人中要派两人去；
    4)B和C都去或都不去；
    5)C和D两人中去一个；
    6)若D不去，则E也不去。
问应当让哪几个人去？
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 16:41:32
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 16:49:26
 */
#include <stdio.h>
int main() {
    int a, b, c, d, e, f;
    for (a = 0; a < 2; a++) {
        for (b = 0; b < 2; b++) {
            for (c = 0; c < 2; c++) {
                for (d = 0; d < 2; d++) {
                    for (e = 0; e < 2; e++) {
                        for (f = 0; f < 2; f++) {
                            if (a + b > 1 && a + d <= 1 && a + e + f == 2 &&
                                b - c == 0 && c + d == 1 && d - e >= 0) {
                                if (a == 1)
                                    printf("A,");

                                if (b == 1)
                                    printf("B,");

                                if (c == 1)
                                    printf("C,");

                                if (d == 1)
                                    printf("D,");

                                if (e == 1)
                                    printf("E,");

                                if (f == 1)
                                    printf("F,");
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;
}