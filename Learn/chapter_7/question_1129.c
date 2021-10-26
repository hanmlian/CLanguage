/*
 * @Descripttion:
    将十个数进行从大到小的顺序进行排列
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 10:12:27
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 10:13:29
 */
#include <stdio.h>
#include "../common/common.h"
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    bubbbleSort(arr, 10, 1);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}