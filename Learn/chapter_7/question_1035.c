/*
 * @Descripttion:
    编写一函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其它字符的个数，在主函数中输入字符串以及输出上述结果
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 11:03:10
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 11:35:07
 */
#include <stdio.h>
#include <string.h>
int statisticsCharType(char a[],
                        int* letterCount,
                        int* numberCount,
                        int* blankCount,
                        int* otherCount) {
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        char c = a[i];
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {  //英文字母
            *letterCount += 1;
        } else if (c >= 48 && c <= 57) {
            *numberCount += 1;
        } else if (c == 32) {
            *blankCount += 1;
        } else {
            *otherCount += 1;
        }
    }
    return 0;
}
int main() {
    char c[1000];
    gets(c);
    int letterCount = 0, numberCount = 0, blankCount = 0, otherCount = 0;
    statisticsCharType(c, &letterCount, &numberCount, &blankCount,
                        &otherCount);
    printf("%d %d %d %d\n", letterCount, numberCount, blankCount, otherCount);
    return 0;
}