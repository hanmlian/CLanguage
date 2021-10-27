/*
 * @Descripttion:
    相传国际象棋是古印度舍罕王的宰相达依尔发明的.舍罕王十分喜爱象棋,决定让宰相自己选择何种赏赐.
    这位聪明的宰相指着8*8共64格的象棋说:陛下,请您赏给我一些麦子吧.就在棋盘的第1格放1粒,第2格放2粒,第三格放4粒,
    以后每一格都比前一格增加一位,依此放完棋盘一64格,我就感激不尽了.舍罕王让人扛了一袋麦子,他要兑现他的许诺.
    请问,国王要兑现他的许诺共要多少粒麦子赏赐他的宰相?
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-27 09:24:28
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-27 10:06:59
 */
#include <stdio.h>
int main() {
    int a[20], len = 1, tmp = 0;
    int i, j, flag = 0;
    for (int i = 0; i < 20; i++) {
        a[i] = 0;
    }
    a[0] = 1;
    for (i = 0; i < 64; i++) {
        tmp = 0;
        for (j = 0; j < len; j++) {
            a[j] = a[j] * 2 + tmp;
            if (a[j] >= 10) {
                tmp = a[j] / 10;
                a[j] %= 10;
                if (j + 1 == len) {
                    a[j + 1] += tmp;
                    flag = 1;
                }
            } else
                tmp = 0;
        }
        if (flag) {
            len++;
            flag = 0;
        }
    }
    a[0] -= 1;
    for (int i = 0; i < len - 1; i++) {
        if (a[i] == -1) {
            a[i + 1] -= 1;
            a[i] = 9;
        }
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}