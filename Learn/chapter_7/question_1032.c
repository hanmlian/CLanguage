/*
 * @Descripttion:
    写一函数，将两个字符串连接
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 10:01:44
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 10:37:42
 */

#include <stdio.h>
#include <string.h>
int main() {
    char a[1000], b[1000];
    gets(a);
    gets(b);
    strcat(a, b);
    puts(a);
    return 0;
}