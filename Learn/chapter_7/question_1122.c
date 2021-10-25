/*
 * @Descripttion:
    两个不同的自然数A和B，如果整数A的全部因子(包括1，不包括A本身)之和等于B；
    且整数B的全部因子(包括1，不包括B本身)之和等于A，则将整数A和B称为亲密数。
    求3000以内的全部亲密数
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 14:36:21
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 15:40:01
 */
#include <stdio.h>
int getNumberFactorSum(int n) {
    int sum = 1, tmp;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            tmp = n / i;
            if (tmp <= n && tmp != i) {
                sum += tmp;
            }
        }
    }
    return sum;
}

int main() {
    int table[3000];
    int sum = 0;
    for (int i = 0; i < 3000; i++) {
        table[i] = 0;
    }

    for (int i = 1; i <= 3000; i++) {
        table[i - 1] = getNumberFactorSum(i);
        if (table[i - 1] > 3000 || table[i - 1] == i)
            continue;
        if (table[table[i - 1] - 1] == i) {
            printf("(%d,%d)", table[i - 1], i);
        }
    }
    printf("\n");
    return 0;
}