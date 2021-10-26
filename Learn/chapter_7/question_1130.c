/*
 * @Descripttion:
    输入一个字符串,数出其中的字母的个数
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 10:17:03
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 10:20:01
 */
#include <stdio.h>
#include <string.h>
int main() {
    char chars[105];
    gets(chars);
    int len = strlen(chars);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if ((chars[i] >= 'A' && chars[i] <= 'Z') ||
            (chars[i] >= 'a' && chars[i] <= 'z'))
            count++;
    }
    printf("%d\n", count);
    return 0;
}