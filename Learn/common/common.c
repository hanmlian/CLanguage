/*
 * @Descripttion: 
 * @version: 
 * @Author: hanmlian
 * @Date: 2021-10-13 11:31:25
 * @LastEditors: hanmlian
 * @LastEditTime: 2021-10-15 14:28:27
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