/*
 * @Descripttion:
    猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
    第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。
    到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-15 14:40:33
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 14:47:04
 */
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long int sum = 1;
    for (int i = 1; i < n; i++) {
        sum += 1;
        sum *= 2;
    }
    printf("%lld\n", sum);
    return 0;
}