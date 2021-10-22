/*
 * @Descripttion:
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-22 16:30:57
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-22 16:35:46
 */
#include <stdio.h>
int main() {
    int nums[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 9; i >= 0; i--) {
        printf("%d", nums[i]);
        if (i > 0)
            printf(" ");
        if (i == 0)
            printf("\n");
    }
    return 0;
}