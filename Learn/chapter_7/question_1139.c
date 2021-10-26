/*
 * @Descripttion:
    求出1-N中的所有素数
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 15:31:23
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 15:36:35
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
    int first = 1;
    eratosthenesSieve(n, visit);
    for (int i = 2; i < n + 1; i++) {
        if (!visit[i]) {
            if (!first)
                printf(" ");
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}