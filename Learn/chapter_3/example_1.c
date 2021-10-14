#include "../common/common.h"

int main() {
    int a = 12;
    float b = 3.1415;
    char c = 'A';
    printf("%d\n", a);
    printf("o%o\n", a);
    printf("0x%x\n", a);
    printf("%#o\n", a);
    printf("%#x\n", a);
    printf("%3.2f\n", b);
    printf("%c\n", c);
    getchar();
    return 0;
}