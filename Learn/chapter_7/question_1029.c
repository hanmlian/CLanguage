/*
 * @Descripttion:
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-22 16:44:47
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-22 17:03:08
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
    if (prime == 1) {
        printf("prime\n");
    } else {
        printf("not prime\n");
    }
    return 0;
}