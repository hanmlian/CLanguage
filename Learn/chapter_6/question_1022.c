/*
 * @Descripttion:素数筛选法求N以内的素数。
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-15 14:13:49
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 14:32:57
 */
#include <stdio.h>
#include "../common/common.h"

int main() {
    int n;
    scanf("%d", &n);
    int visit[n + 1];
    for (int i = 0; i < n + 1; i++) {
        visit[i] = 0;
    }

    eratosthenesSieve(n, visit);
    for (int i = 2; i < n + 1; i++) {
        if (!visit[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}