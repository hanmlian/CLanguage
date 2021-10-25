/*
 * @Descripttion:
    所给字符串正序和反序连接，形成新串并输出
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 17:20:57
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 17:37:02
 */
#include <stdio.h>
#include <string.h>

int main() {
    char ch[100], tmp[50];
    gets(ch);
    int len = strlen(ch);
    int count = 0;
    for (int i = len - 1; i >= 0; i--) {
        tmp[count++] = ch[i];
    }
    strcat(ch, tmp);
    puts(ch);
    return 0;
}