/*
 * @Descripttion:
    输入一串字符,将其中的大写变成小写，若不为大写则原样输出
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 16:27:00
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 16:35:21
 */
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    gets(a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
    }
    puts(a);
    return 0;
}