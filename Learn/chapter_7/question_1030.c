/*
 * @Descripttion:
    写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-25 09:28:59
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-25 09:44:24
 */
#include <stdio.h>

void inverseArray(int arr[3][3]) {
    int tmp[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tmp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[j][i] = tmp[i][j];
        }
    }
}

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            scanf("%d %d %d\n", &arr[i][0], &arr[i][1], &arr[i][2]);
            continue;
        }
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
    inverseArray(arr);
    for (int i = 0; i < 3; i++) {
        printf("%d %d %d\n", arr[i][0], arr[i][1], arr[i][2]);
    }
    return 0;
}