/*
 * @Descripttion:
    写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1
 9 9 0"
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 10:55:37
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 11:01:56
 */
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int arr[4];
    for (int i = 0; i < 4; i++) {
        arr[i] = a % 10;
        a /= 10;
    }

    for (int i = 3; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}