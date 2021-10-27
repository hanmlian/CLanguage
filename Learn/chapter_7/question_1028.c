/*
 * @Descripttion:
    求方程的根，用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果。从主函数输入a、b、c的值。
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 16:12:04
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 16:12:04
 */
#include <stdio.h>
int main() {
    double sqrt_my(double x);
    double a, b, c, m, n, x1, x2;
    scanf("%lf%lf%lf", &a, &b, &c);
    m = -b / (2.0 * a);
    n = b * b - 4.0 * a * c;
    if (n > 0) {
        double t = sqrt_my(n) / (2.0 * a);
        x1 = m + t;
        x2 = m - t;
        printf("x1=%0.3lf x2=%0.3lf\n", x1, x2);
    } else if (n == 0) {
        x1 = m;
        printf("x1=%0.3lf x2=%0.3lf\n", x1, x1);
    } else {
        double t = sqrt_my(-n) / (2.0 * a);
        printf("x1=%0.3lf+%0.3lfi x2=%0.3lf-%0.3lfi\n", m, t, m, t);
    }
    return 0;
}
//二分法计算平方根
double sqrt_my(double x) {
    double low = 0.0, high = x, mid = x / 2, precision = 1E-5;
    while (high - low > precision) {
        if (mid * mid > x)
            high = mid;
        else
            low = mid;
        mid = (low + high) / 2;
    }
    return mid;
}