/*
 * @Descripttion:
    用迭代法求平方根
    公式：求a的平方根的迭代公式为： X[n+1]=(X[n]+a/X[n])/2
    要求前后两次求出的差的绝对值少于0.00001。 输出保留3位小数
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-15 14:33:42
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 14:38:47
 */
#include <math.h>
#include <stdio.h>
int main() {
    double x1, x2, a;
    scanf("%lf", &a);
    x2 = 1.0;
    while (1) {
        x1 = x2;
        x2 = (x1 + a / x1) / 2.0;
        if (fabs(x1 - x2) < 0.00001) {
            printf("%.3f\n", x2);
            break;
        }
    }
    return 0;
}