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