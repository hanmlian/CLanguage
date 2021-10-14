#include <stdio.h>
int main() {
    float temperature;
    scanf("%f", &temperature);
    float result = 5 * (temperature - 32) / 9;
    printf("c=%.2f\n", result);
    return 0;
}