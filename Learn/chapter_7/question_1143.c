/*
 * @Descripttion:
    编写一个程序判断一个数是否为素数
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 16:11:18
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 16:12:53
 */
#include <stdio.h>
int isPrime(int value) {
    if (value == 0 || value == 1)
        return 0;
    for (int i = 2; i * i <= value; i++) {
        int tmp = value % i;
        if (tmp == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a;
    scanf("%d", &a);
    int prime = isPrime(a);
    printf("%d\n", prime);
    return 0;
}