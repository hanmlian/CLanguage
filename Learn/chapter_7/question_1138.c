/*
 * @Descripttion:
    求矩阵的两对角线上的元素之和
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 15:07:54
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 15:28:46
 */
#include <stdio.h>

int matrixDiagonalSum(int a[], int n) {
    int sum = 0, index1 = 1, index2 = n;
    for (int i = 0; i < n; i++) {
        sum += a[index1 - 1];
        if (index2 != index1)
            sum += a[index2 - 1];
        index1 += n + 1;
        index2 += n - 1;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n * n];
    for (int i = 0; i < n * n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", matrixDiagonalSum(a, n));
    printf("\n");
    return 0;
}