/*
 * @Descripttion:
    中国古代数学家张丘建在他的《算经》中提出了著名的“百钱买百鸡问题”：
    鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问翁、母、雏各几何
 * @version: 1.0
 * @Author: hanmlian
 * @Date: 2021-10-26 15:52:45
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 16:04:26
 */
#include <stdio.h>
#include <string.h>
int main() {
    int priceA, priceB, priceC;
    for (int i = 0; i <= 100; i++) {
        priceA = 5 * i;
        if (5 * i > 100)
            break;
        for (int j = 0; j <= 100; j++) {
            priceB = j * 3;
            if (priceA + priceB > 100)
                break;
            for (int k = 0; k <= 100; k += 3) {
                priceC = k / 3;
                if (i + j + k == 100 && priceA + priceB + priceC == 100) {
                    printf("cock=%d,hen=%d,chicken=%d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}