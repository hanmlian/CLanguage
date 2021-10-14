#include "../common/common.h"

int main() {
    int a;
    scanf("%d", &a);
    printf("0");
    dec_to_x(a, 8);
    printf("\n");
    dec_to_x(a, 10);
    printf("\n");
    printf("0x");
    dec_to_x(a, 16);
    printf("\n");
    return 0;
}