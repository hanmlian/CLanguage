#include <stdio.h>
#include "../common/common.h"

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}