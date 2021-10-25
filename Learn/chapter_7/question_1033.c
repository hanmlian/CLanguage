/*
 * @Descripttion:
    写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 10:47:04
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 10:52:38
 */
#include <stdio.h>
#include <string.h>

int extraVowel(char a[], char b[]) {
    int len = strlen(a);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' ||
            a[i] == 'u') {
            b[count++] = a[i];
        }
    }
    return count;
}

int main() {
    char a[1000], b[1000];
    gets(a);
    int count = extraVowel(a, b);
    for (int i = 0; i < count; i++) {
        printf("%c", b[i]);
    }
    printf("\n");
    return 0;
}