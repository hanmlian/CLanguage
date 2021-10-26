/*
 * @Descripttion:
    将四个整数进行从小到大的顺序排列
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 09:36:41
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 10:09:26
 */
#include <stdio.h>
#include "../common/common.h"
int main() {
    int arr[4];
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
    bubbbleSort(arr, 4, 0);
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}