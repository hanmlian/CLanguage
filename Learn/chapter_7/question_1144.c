/*
 * @Descripttion:
    自守数是指一个数的平方的尾数等于该数自身的自然数。
    例如：
    25^2=625
    76^2=5776
    9376^2=87909376
    请求出200000以内的自守数?
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 16:33:38
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 17:00:22
 */
#include <stdio.h>

int numberLength(int number) {
    if (number > 0 && number < 10)
        return 1;
    else if (number >= 10 && number < 100)
        return 2;
    else if (number >= 100 && number < 1000)
        return 3;
    else if (number >= 1000 && number < 10000)
        return 4;
    else if (number >= 10000 && number < 100000)
        return 5;
    else if (number >= 100000 && number < 1000000)
        return 6;
    return -1;
}

int main() {
    long a;
    int len, tmp = 1;
    for (int i = 0; i < 200001; i++) {
        len = numberLength(i);
        for (int j = 0; j < len; j++) {
            tmp *= 10;
        }

        a = (long)i * i;
        if (a % tmp == i) {
            printf("%d  ",i);
        }
        tmp = 1;
    }

    printf("\n");
    return 0;
}