/*
 * @Descripttion:
    一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。
 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-15 14:48:53
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 15:16:29
 */
#include <stdio.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double height = a, length = 0.0;
    for (int i = 0; i < b; i++) {
        length += height;
        height /= 2;
        if (i < b - 1) {
            length += height;
        }
    }

    printf("%.2lf %.2lf\n", height, length);
    return 0;
}