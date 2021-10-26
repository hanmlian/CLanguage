/*
 * @Descripttion:
 * @version:
 * @Author: hanmlian
 * @Date: 2021-10-13 11:31:25
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-26 10:09:21
 */
#include "common.h"

char ch[] = {'0', '1', '2', '3', '4', '5', '6', '7',
             '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

void dec_to_x(int val, int x) {
    if (x < 2)
        return;
    if (val > 0) {
        dec_to_x(val / x, x);
        printf("%c", ch[val % x]);
    }
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

/**
 * @name: max
 * @msg: 求a,b的最大值
 * @param {int} a
 * @param {int} b
 * @return {int} 返回最大值
 */
int max(int a, int b) {
    return a > b ? a : b;
}

/**
 * @name: 埃拉托斯特尼筛法
 * @msg: 筛选出指定数以内的素数
 * @param {int} n
 * @param {int*} visit
 * @return {*}
 */
void eratosthenesSieve(int n, int* visit) {
    visit[0] = visit[1] = 1;  // 0,1特判
    for (int i = 2; i * i < n; ++i) {
        // i是质数
        if (!visit[i]) {
            //划掉他的倍数
            for (int j = i * 2; j <= n; j += i) {
                visit[j] = 1;
            }
        }
    }
}

/**
 * @name: getNumberFactor
 * @msg: 获取一个整数的所有因子
 * @param {int} n   整数
 * @param {int} res 保存所有因子的数组
 * @return {int} count 返回数组的长度
 */
int getNumberFactors(int n, int* res) {
    int count = 0, tmp;
    res[count++] = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            res[count++] = i;
            tmp = n / i;
            if (tmp <= n && tmp != i) {
                res[count++] = tmp;
            }
        }
    }
    return count;
}

/**
 * @name: swapNumber
 * @msg: 交换两个整数的值
 * @param {int*} a
 * @param {int*} b
 * @return {void}
 */
void swapNumber(int* a, int* b) {
    int buf = *a;
    *a = *b;
    *b = buf;
}

/**
 * @name: sort
 * @msg: 对指定长度数组排序
 * @param {int} array
 * @param {int} length
 * @param {int} 0表示从小到大，非0表示从大到小
 * @return {int} 成功或失败
 */
int bubbbleSort(int array[], int length, int compare) {
    int buf;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (compare) {
                if (array[j] < array[j + 1]) {
                    swapNumber(&array[j], &array[j + 1]);
                }
            } else {
                if (array[j] > array[j + 1]) {
                    swapNumber(&array[j], &array[j + 1]);
                }
            }
        }
    }

    return 0;
}
