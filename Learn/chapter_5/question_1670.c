#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    for (int i = 0; i < 3; i++) {
        printf("%d", number % 10);
        if(i < 2) {
            printf(" ");
        }
        number /= 10;
    }
    printf("\n");
    return 0;
}